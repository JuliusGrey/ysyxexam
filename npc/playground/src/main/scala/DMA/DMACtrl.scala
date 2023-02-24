package DMA
import chisel3.util._
import chisel3._
import chisel3.util.experimental.BoringUtils
import common.Interface.{AXIIO, cpuRWIO}
import common.Param.{AXIID, addrW, dataW}
class DMACtrl extends Module{
  val io = IO(new Bundle {
    val dataIn = new AXIIO
    val dataOutMMIO = Flipped (new cpuRWIO(dataW , addrW ))
  })

  val dmaCtrl = Wire(UInt((dataW*3 ).W))
  dmaCtrl := 0.U
  BoringUtils.addSink(dmaCtrl, "dmaCtrl")
  val dmaSrcAddr = dmaCtrl( dataW - 1,0 ).asUInt()
  val dmaDstAddr = dmaCtrl( 2*dataW - 1,dataW ).asUInt()
  val dmaDstLen = dmaCtrl( 3*dataW - 1,dataW*2 ).asUInt()
  val dmaEn = Wire(Bool())
  dmaEn:= false.B
  BoringUtils.addSink(dmaEn, "dmaEn")


  val blockDMA = Wire(Bool())
  blockDMA := dmaEn && !io.dataIn.rlast
//  blockDMA := dmaEn && isIdle
  BoringUtils.addSource(blockDMA, "blockDMA")

  val rIdle :: rReq :: rData  :: Nil = Enum(3)
  val rState = RegInit(rIdle)

  val idleMux = Mux(dmaEn,rReq,rIdle)
  val reqMux = Mux(
    io.dataIn.arready,
    Mux(
      io.dataIn.rlast,
      rIdle,
      rData
    ),
    rReq
  )
  val dataMux = Mux(io.dataIn.rlast , rIdle, rData)

  rState := MuxLookup(
    rState,
    rState,
    Array(
      rIdle -> idleMux,
      rReq -> reqMux,
      rData -> dataMux
    )
  )

  val isIdle = rState === rIdle
  val isReq = rState === rReq
  val isData = rState === rData

  val DMABuzy = isReq || isData
  BoringUtils.addSource(DMABuzy, "DMABuzy")


  io.dataIn.arvalid := isReq
  io.dataIn.araddr := dmaSrcAddr
  io.dataIn.arid := AXIID.U
  io.dataIn.arlen := dmaDstLen(7,0).asUInt()
  io.dataIn.arsize := 3.U
  io.dataIn.arburst := 1.U(2.W)

  io.dataIn.rready := isReq || isData

  io.dataOutMMIO.valid := (isReq || isData) && io.dataIn.rvalid

  io.dataOutMMIO.data_write := io.dataIn.rdata

  io.dataIn.awvalid :=DontCare
  io.dataIn.awaddr :=DontCare
  io.dataIn.awid :=DontCare
  io.dataIn.awlen :=DontCare
  io.dataIn.awsize :=DontCare
  io.dataIn.awburst :=DontCare
  io.dataIn.wvalid :=DontCare
  io.dataIn.wdata :=DontCare
  io.dataIn.wstrb :=DontCare
  io.dataIn.wlast :=DontCare
  io.dataIn.bready :=DontCare




//  val addrCnt = RegInit(0.U(addrW.W))
//  addrCnt := Mux(
//    isIdle && dmaEn,
//    dmaDstAddr,
//    Mux(
//      (isReq || isData) &&io.dataIn.rvalid ,
//      addrCnt + 8.U,
//      addrCnt
//    )
//  )
//  io.dataOutMMIO.addr := addrCnt
//
//  io.dataOutMMIO.wen := (isReq || isData) && io.dataIn.rvalid

  val addrCnt = RegInit(0.U(addrW.W))
  addrCnt := Mux(
    isReq,
    dmaDstAddr,
    Mux(
      isData && io.dataIn.rvalid,
      addrCnt + 8.U,
      addrCnt
    )
  )
  io.dataOutMMIO.addr := addrCnt

  io.dataOutMMIO.wen := isData && io.dataIn.rvalid

  io.dataOutMMIO.rsize := 3.U
  io.dataOutMMIO.mask := "hff".U



}
