package IDU
import chisel3._
import common.Param.{addrW, dataW}

class DPIC_RegRead extends BlackBox {
  val io = IO(new Bundle {
    val inst = Input(Vec(32,Output(UInt(dataW.W))))
    val pc = Input(UInt(dataW.W))
  })

}
