

const u8 Jetta_UC2_UC4_8kSRCommander_v1507[] = {
// Tell command interpreter that there are 126 commands including this one
0x76, 0x7e,
0x77, 0x00,
0x78, 0x05,
// * reset the framework *
0x76, 0xaa,
0x77, 0xaa,
0x78, 0xaa,
// * add an I/O buffer and set its block size *
0x76, 0x10,
0x77, 0x10,
0x78, 0x10,
//   buffer: ADCB_Buf (L)
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   size: 16
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
// * add an I/O buffer and set its block size *
0x76, 0x10,
0x77, 0x10,
0x78, 0x10,
//   buffer: ADCB_Buf (R)
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
//   size: 16
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
// * add an I/O buffer and set its block size *
0x76, 0x10,
0x77, 0x10,
0x78, 0x10,
//   buffer: DACA_Buf (L)
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
//   size: 96
0x76, 0x60,
0x77, 0x00,
0x78, 0x00,
// * add an I/O buffer and set its block size *
0x76, 0x10,
0x77, 0x10,
0x78, 0x10,
//   buffer: DACB_Buf (L)
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   size: 96
0x76, 0x60,
0x77, 0x00,
0x78, 0x00,
// * add an I/O buffer and set its block size *
0x76, 0x10,
0x77, 0x10,
0x78, 0x10,
//   buffer: DACC_Buf (L)
0x76, 0x14,
0x77, 0x00,
0x78, 0x00,
//   size: 96
0x76, 0x60,
0x77, 0x00,
0x78, 0x00,
// * add an I/O buffer and set its block size *
0x76, 0x10,
0x77, 0x10,
0x78, 0x10,
//   buffer: I2SA_In_Buf (L)
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   size: 96
0x76, 0x60,
0x77, 0x00,
0x78, 0x00,
// * add a dynamic buffer and set its size *
0x76, 0x77,
0x77, 0x77,
0x78, 0x77,
//   size: 48
0x76, 0x30,
0x77, 0x00,
0x78, 0x00,
// * add a dynamic buffer and set its size *
0x76, 0x77,
0x77, 0x77,
0x78, 0x77,
//   size: 96
0x76, 0x60,
0x77, 0x00,
0x78, 0x00,
// * add a dynamic buffer and set its size *
0x76, 0x77,
0x77, 0x77,
0x78, 0x77,
//   size: 16
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 0 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BufferCopyStereo
0x76, 0x07,
0x77, 0x00,
0x78, 0x00,
//   2 buffer pointers
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to I2SA_In_Buf (stereo)
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACA_Buf (stereo)
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
//   1 parameters
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Buffer length (words) : 96
0x76, 0x60,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 1 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: StereoToMono
0x76, 0x28,
0x77, 0x00,
0x78, 0x00,
//   2 buffer pointers
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to I2SA_In_Buf (stereo)
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DynBuffer1 (left)
0x76, 0x19,
0x77, 0x00,
0x78, 0x00,
//   1 parameters
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 48
0x76, 0x30,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 2 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: Mix2Mono
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   3 buffer pointers
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   'Input1' points to ADCB_Buf (left)
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   'Input2' points to ADCB_Buf (right)
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DynBuffer2 (left)
0x76, 0x1b,
0x77, 0x00,
0x78, 0x00,
//   2 parameters
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   Gain : 8388607
0x76, 0xff,
0x77, 0xff,
0x78, 0x7f,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 3 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BufferCopyMono
0x76, 0x43,
0x77, 0x00,
0x78, 0x00,
//   2 buffer pointers
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to DynBuffer1 (left)
0x76, 0x19,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACC_Buf (left)
0x76, 0x14,
0x77, 0x00,
0x78, 0x00,
//   1 parameters
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 48
0x76, 0x30,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 4 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BufferCopyMono
0x76, 0x43,
0x77, 0x00,
0x78, 0x00,
//   2 buffer pointers
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to DynBuffer1 (left)
0x76, 0x19,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (left)
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   1 parameters
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 48
0x76, 0x30,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 5 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: ASRC_StereoOut init
0x76, 0x4a,
0x77, 0x00,
0x78, 0x00,
//   no ports
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   no parameters
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   no state
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 6 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: ASRC_StereoOut
0x76, 0x4b,
0x77, 0x00,
0x78, 0x00,
//   4 buffer pointers
0x76, 0x04,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to DynBuffer2 (stereo)
0x76, 0x1b,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to I2SB_Out_Buf (stereo)
0x76, 0x3e,
0x77, 0x00,
0x78, 0x00,
//   'pPersistentAlignedXmem' points to StaticBuff2 (stereo)
0x76, 0x2f,
0x77, 0x00,
0x78, 0x00,
//   'pScratchXmem' points to DynBuffer0 (stereo)
0x76, 0x17,
0x77, 0x00,
0x78, 0x00,
//   5 parameters
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   Input block size : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   Input time step : 1572864
0x76, 0x00,
0x77, 0x00,
0x78, 0x18,
//   Output block size (floor) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   Output time step (expected) : 1572864
0x76, 0x00,
0x77, 0x00,
0x78, 0x18,
//   Nominal loop increment : 262144
0x76, 0x00,
0x77, 0x00,
0x78, 0x04,
//   Reserved states
0x76, 0x17,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 7 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: schedule manager
0x76, 0x14,
0x77, 0x00,
0x78, 0x00,
//   no ports
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   no parameters
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   no state
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * set main config *
0x76, 0x99,
0x77, 0x99,
0x78, 0x99,
//   block processing interrupt trigger size: 96
0x76, 0x60,
0x77, 0x00,
0x78, 0x00,
//   ADCS: 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   DACS: 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   I2S: configure timestamps and buffering mode
0x76, 0x25,
0x77, 0x00,
0x78, 0x00,
//   master clock is 0x000003
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
// * Create function schedule *
0x76, 0x88,
0x77, 0x88,
0x78, 0x88,
//   Number of one time function instances
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   Number of functions in schedule: 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 5
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 7
0x76, 0x07,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 3
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 4
0x76, 0x04,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 6
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
// * Create ping pong schedule *
0x76, 0xff,
0x77, 0xff,
0x78, 0xff,
//   Number of ping pong pointers in schedule  7
0x76, 0x07,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 3
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 4
0x76, 0x04,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 5
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 6
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
// * Create new block pointer schedule *
0x76, 0x20,
0x77, 0x20,
0x78, 0x20,
//   Number of block pointers in schedule 6
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
//   ADCB_Buf (L)
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   ADCB_Buf (R)
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
//   DACA_Buf (L)
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
//   DACB_Buf (L)
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   DACC_Buf (L)
0x76, 0x14,
0x77, 0x00,
0x78, 0x00,
//   I2SA_In_Buf (L)
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
};
