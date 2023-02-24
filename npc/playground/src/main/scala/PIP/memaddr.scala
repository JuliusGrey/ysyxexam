package PIP
import chisel3._
import common.Param.addrW
class memaddr extends BlackBox{
  val io = IO(new Bundle() {
    val addr = Input(UInt(addrW.W))
  })

}