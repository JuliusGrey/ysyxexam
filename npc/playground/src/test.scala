import chisel3._
import chisel3.util._
class test1 extends RawModule{
  val io = IO(new Bundle {
    val ina = Input(UInt(8.W))
    val inb = Input(UInt(8.W))
    val out = Output(UInt(8.W))
  })
  io.out := io.ina^io.inb
}