#ifndef _D1981_USECASE3B_DSP_H
#define _D1981_USECASE3B_DSP_H

const u8 LynxUseCase3bCommander_withHP_BB[] = {
// Tell command interpreter that there are 208 commands including this one
0x76, 0xd0,
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
//   buffer: ADCA_Buf (L)
0x76, 0x06,
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
//   size: 16
0x76, 0x10,
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
//   size: 16
0x76, 0x10,
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
//   size: 16
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
// * add an I/O buffer and set its block size *
0x76, 0x10,
0x77, 0x10,
0x78, 0x10,
//   buffer: I2SA_Out_Buf (L)
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   size: 16
0x76, 0x10,
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
// * reset filter coefficient heap and pointers *
0x76, 0x01,
0x77, 0xe0,
0x78, 0xee,
// * add a dynamic coefficient buffer, set its size and coefficients *
0x76, 0x00,
0x77, 0xe0,
0x78, 0xee,
//   size: 5
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: 8388607
0x76, 0xff,
0x77, 0xff,
0x78, 0x7f,
// * add a dynamic coefficient buffer, set its size and coefficients *
0x76, 0x00,
0x77, 0xe0,
0x78, 0xee,
//   size: 10
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: -2015947
0x76, 0x35,
0x77, 0x3d,
0x78, 0xe1,
//   coefficient value: 4112160
0x76, 0x20,
0x77, 0xbf,
0x78, 0x3e,
//   coefficient value: 2039402
0x76, 0x6a,
0x77, 0x1e,
0x78, 0x1f,
//   coefficient value: -4078804
0x76, 0x2c,
0x77, 0xc3,
0x78, 0xc1,
//   coefficient value: 2039402
0x76, 0x6a,
0x77, 0x1e,
0x78, 0x1f,
//   coefficient value: -2063130
0x76, 0xe6,
0x77, 0x84,
0x78, 0xe0,
//   coefficient value: 4159332
0x76, 0x64,
0x77, 0x77,
0x78, 0x3f,
//   coefficient value: 2097152
0x76, 0x00,
0x77, 0x00,
0x78, 0x20,
//   coefficient value: -4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0xc0,
//   coefficient value: 2097152
0x76, 0x00,
0x77, 0x00,
0x78, 0x20,
// * add a dynamic coefficient buffer, set its size and coefficients *
0x76, 0x00,
0x77, 0xe0,
0x78, 0xee,
//   size: 10
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: -4133823
0x76, 0x41,
0x77, 0xec,
0x78, 0xc0,
//   coefficient value: 8327581
0x76, 0x9d,
0x77, 0x11,
0x78, 0x7f,
//   coefficient value: 422
0x76, 0xa6,
0x77, 0x01,
0x78, 0x00,
//   coefficient value: -821
0x76, 0xcb,
0x77, 0xfc,
0x78, 0xff,
//   coefficient value: 422
0x76, 0xa6,
0x77, 0x01,
0x78, 0x00,
//   coefficient value: -4170027
0x76, 0xd5,
0x77, 0x5e,
0x78, 0xc0,
//   coefficient value: 8362444
0x76, 0xcc,
0x77, 0x99,
0x78, 0x7f,
//   coefficient value: 4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0x40,
//   coefficient value: -8348408
0x76, 0x08,
0x77, 0x9d,
0x78, 0x80,
//   coefficient value: 4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0x40,
// * Create function instance 0 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BassBoost init
0x76, 0x33,
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
// * Create function instance 1 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BassBoost
0x76, 0x34,
0x77, 0x00,
0x78, 0x00,
//   10 buffer pointers
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to ADCA_Buf (stereo) //pp0
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (stereo) //pp1
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Delay lineL HPF' points to StaticBuff1 (stereo)
0x76, 0x2e,
0x77, 0x00,
0x78, 0x00,
//   'Delay lineR HPF' points to StaticBuff2 (stereo)
0x76, 0x2f,
0x77, 0x00,
0x78, 0x00,
//   'Delay line FLT1' points to StaticBuff3 (stereo)
0x76, 0x30,
0x77, 0x00,
0x78, 0x00,
//   'Delay line FLT2' points to StaticBuff4 (stereo)
0x76, 0x31,
0x77, 0x00,
0x78, 0x00,
//   'Weights HPF' points to AllPassWeights.txt (stereo)
0x76, 0x4c,
0x77, 0x00,
0x78, 0x00,
//   'Weights FLT1' points to LPFweights.txt (stereo)
0x76, 0x4e,
0x77, 0x00,
0x78, 0x00,
//   'Weights FLT2' points to HPFweights.txt (stereo)
0x76, 0x4d,
0x77, 0x00,
0x78, 0x00,
//   'Scratch memory' points to DynBuffer0 (stereo)
0x76, 0x17,
0x77, 0x00,
0x78, 0x00,
//   17 parameters
0x76, 0x11,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   Low Freq gain  : 4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0x40,
//   Low Freq left shift : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   High Freq gain  : 7549747
0x76, 0x33,
0x77, 0x33,
0x78, 0x73,
//   High Freq left shift : 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   Drive gain  : 4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0x40,
//   Drive left shift : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Bass gain  : 4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0x40,
//   Bass left shift : 4
0x76, 0x04,
0x77, 0x00,
0x78, 0x00,
//   Alpha  : 37917
0x76, 0x1d,
0x77, 0x94,
0x78, 0x00,
//   Beta  : 188077
0x76, 0xad,
0x77, 0xde,
0x78, 0x02,
//   No. biquad sections HPF : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Left shift HPF : 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   No. biquad sections FLT1 : 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   Left shift FLT1 : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   No. biquad sections FLT2 : 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   Left shift FLT2 : 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 2 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: Mix2Stereo
0x76, 0x3b,
0x77, 0x00,
0x78, 0x00,
//   3 buffer pointers
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   'Input1' points to I2SA_In_Buf (stereo) //pp2
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   'Input2' points to DACB_Buf (stereo) //pp3
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (stereo) //pp4
0x76, 0x12,
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
//   Type: BiquadCascadeStereo init
0x76, 0x26,
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
// * Create function instance 4 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BiquadCascadeStereo
0x76, 0x11,
0x77, 0x00,
0x78, 0x00,
//   6 buffer pointers
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to DACB_Buf (stereo) //pp5
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACA_Buf (stereo) //pp6
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
//   'Delay line L' points to StaticBuff5 (stereo)
0x76, 0x32,
0x77, 0x00,
0x78, 0x00,
//   'Delay line R' points to StaticBuff6 (stereo)
0x76, 0x33,
0x77, 0x00,
0x78, 0x00,
//   'Scratch memory' points to DynBuffer0 (stereo)
0x76, 0x17,
0x77, 0x00,
0x78, 0x00,
//   'Weights' points to AllPassWeights.txt (stereo)
0x76, 0x4c,
0x77, 0x00,
0x78, 0x00,
//   3 parameters
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   No. biquad sections : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Left shift : 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x07,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 5 *
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
//   'Input' points to DACB_Buf (stereo) //pp7
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (left) //pp8
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   1 parameters
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 6 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BiquadCascadeMono init
0x76, 0x36,
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
// * Create function instance 7 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BiquadCascadeMono
0x76, 0x35,
0x77, 0x00,
0x78, 0x00,
//   5 buffer pointers
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to DACB_Buf (left) //pp9
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (left) //pp10
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Delay line' points to StaticBuff7 (stereo)
0x76, 0x34,
0x77, 0x00,
0x78, 0x00,
//   'Scratch memory' points to DynBuffer0 (stereo)
0x76, 0x17,
0x77, 0x00,
0x78, 0x00,
//   'Weights' points to AllPassWeights.txt (stereo)
0x76, 0x4c,
0x77, 0x00,
0x78, 0x00,
//   3 parameters
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   No. biquad sections : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Left shift : 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 8 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: MonoToStereo
0x76, 0x27,
0x77, 0x00,
0x78, 0x00,
//   2 buffer pointers
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to DACB_Buf (left) //pp11
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (stereo) //pp12
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   1 parameters
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 9 *
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
//   'Input' points to DACB_Buf (stereo) //pp13
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to I2SA_Out_Buf (stereo) //pp14
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   1 parameters
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Buffer length (words) : 16
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 10 *
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
//   block processing interrupt trigger size: 16
0x76, 0x10,
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
//   Select which output I2Ss are synchronous
0x76, 0x07,
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
0x76, 0x04,
0x77, 0x00,
0x78, 0x00,
//   Number of functions in schedule: 11
0x76, 0x0b,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 3
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 6
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 10
0x76, 0x0a,
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
//   function pointer: 4
0x76, 0x04,
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
//   function pointer: 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 9
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
// * Create ping pong schedule *
0x76, 0xff,
0x77, 0xff,
0x78, 0xff,
//   Number of ping pong pointers in schedule  15
0x76, 0x0f,
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
//   ping pong pointer: 7
0x76, 0x07,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 9
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 10
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 11
0x76, 0x0b,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 12
0x76, 0x0c,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 13
0x76, 0x0d,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 14
0x76, 0x0e,
0x77, 0x00,
0x78, 0x00,
// * Create new block pointer schedule *
0x76, 0x20,
0x77, 0x20,
0x78, 0x20,
//   Number of block pointers in schedule 5
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   ADCA_Buf (L)
0x76, 0x06,
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
//   I2SA_In_Buf (L)
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   I2SA_Out_Buf (L)
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
};
#define LynxUseCase3bCommander_withHP_BB_SIZE	(sizeof(LynxUseCase3bCommander_withHP_BB)/2)



const u8 LynxUseCase3bCommander_withSPK_BB[] = {
// Tell command interpreter that there are 208 commands including this one
0x76, 0xd0,
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
//   buffer: ADCA_Buf (L)
0x76, 0x06,
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
//   size: 16
0x76, 0x10,
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
//   size: 16
0x76, 0x10,
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
//   size: 16
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
// * add an I/O buffer and set its block size *
0x76, 0x10,
0x77, 0x10,
0x78, 0x10,
//   buffer: I2SA_Out_Buf (L)
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   size: 16
0x76, 0x10,
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
// * reset filter coefficient heap and pointers *
0x76, 0x01,
0x77, 0xe0,
0x78, 0xee,
// * add a dynamic coefficient buffer, set its size and coefficients *
0x76, 0x00,
0x77, 0xe0,
0x78, 0xee,
//   size: 5
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: 8388607
0x76, 0xff,
0x77, 0xff,
0x78, 0x7f,
// * add a dynamic coefficient buffer, set its size and coefficients *
0x76, 0x00,
0x77, 0xe0,
0x78, 0xee,
//   size: 10
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: -2015947
0x76, 0x35,
0x77, 0x3d,
0x78, 0xe1,
//   coefficient value: 4112160
0x76, 0x20,
0x77, 0xbf,
0x78, 0x3e,
//   coefficient value: 2039402
0x76, 0x6a,
0x77, 0x1e,
0x78, 0x1f,
//   coefficient value: -4078804
0x76, 0x2c,
0x77, 0xc3,
0x78, 0xc1,
//   coefficient value: 2039402
0x76, 0x6a,
0x77, 0x1e,
0x78, 0x1f,
//   coefficient value: -2063130
0x76, 0xe6,
0x77, 0x84,
0x78, 0xe0,
//   coefficient value: 4159332
0x76, 0x64,
0x77, 0x77,
0x78, 0x3f,
//   coefficient value: 2097152
0x76, 0x00,
0x77, 0x00,
0x78, 0x20,
//   coefficient value: -4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0xc0,
//   coefficient value: 2097152
0x76, 0x00,
0x77, 0x00,
0x78, 0x20,
// * add a dynamic coefficient buffer, set its size and coefficients *
0x76, 0x00,
0x77, 0xe0,
0x78, 0xee,
//   size: 10
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   coefficient value: -4133823
0x76, 0x41,
0x77, 0xec,
0x78, 0xc0,
//   coefficient value: 8327581
0x76, 0x9d,
0x77, 0x11,
0x78, 0x7f,
//   coefficient value: 422
0x76, 0xa6,
0x77, 0x01,
0x78, 0x00,
//   coefficient value: -821
0x76, 0xcb,
0x77, 0xfc,
0x78, 0xff,
//   coefficient value: 422
0x76, 0xa6,
0x77, 0x01,
0x78, 0x00,
//   coefficient value: -4170027
0x76, 0xd5,
0x77, 0x5e,
0x78, 0xc0,
//   coefficient value: 8362444
0x76, 0xcc,
0x77, 0x99,
0x78, 0x7f,
//   coefficient value: 4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0x40,
//   coefficient value: -8348408
0x76, 0x08,
0x77, 0x9d,
0x78, 0x80,
//   coefficient value: 4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0x40,
// * Create function instance 0 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BassBoost init
0x76, 0x33,
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
// * Create function instance 1 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BassBoost
0x76, 0x34,
0x77, 0x00,
0x78, 0x00,
//   10 buffer pointers
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to ADCA_Buf (stereo) //pp0
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (stereo) //pp1
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Delay lineL HPF' points to StaticBuff1 (stereo)
0x76, 0x2e,
0x77, 0x00,
0x78, 0x00,
//   'Delay lineR HPF' points to StaticBuff2 (stereo)
0x76, 0x2f,
0x77, 0x00,
0x78, 0x00,
//   'Delay line FLT1' points to StaticBuff3 (stereo)
0x76, 0x30,
0x77, 0x00,
0x78, 0x00,
//   'Delay line FLT2' points to StaticBuff4 (stereo)
0x76, 0x31,
0x77, 0x00,
0x78, 0x00,
//   'Weights HPF' points to HPFweights.txt (stereo)
0x76, 0x4d,
0x77, 0x00,
0x78, 0x00,
//   'Weights FLT1' points to LPFweights.txt (stereo)
0x76, 0x4e,
0x77, 0x00,
0x78, 0x00,
//   'Weights FLT2' points to HPFweights.txt (stereo)
0x76, 0x4d,
0x77, 0x00,
0x78, 0x00,
//   'Scratch memory' points to DynBuffer0 (stereo)
0x76, 0x17,
0x77, 0x00,
0x78, 0x00,
//   17 parameters
0x76, 0x11,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   Low Freq gain  : 4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0x40,
//   Low Freq left shift : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   High Freq gain  : 5872026
0x76, 0x9a,
0x77, 0x99,
0x78, 0x59,
//   High Freq left shift : 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   Drive gain  : 4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0x40,
//   Drive left shift : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Bass gain  : 4194304
0x76, 0x00,
0x77, 0x00,
0x78, 0x40,
//   Bass left shift : 4
0x76, 0x04,
0x77, 0x00,
0x78, 0x00,
//   Alpha  : 37917
0x76, 0x1d,
0x77, 0x94,
0x78, 0x00,
//   Beta  : 188077
0x76, 0xad,
0x77, 0xde,
0x78, 0x02,
//   No. biquad sections HPF : 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   Left shift HPF : 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   No. biquad sections FLT1 : 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   Left shift FLT1 : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   No. biquad sections FLT2 : 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   Left shift FLT2 : 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 2 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: Mix2Stereo
0x76, 0x3b,
0x77, 0x00,
0x78, 0x00,
//   3 buffer pointers
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   'Input1' points to I2SA_In_Buf (stereo) //pp2
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   'Input2' points to DACB_Buf (stereo) //pp3
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (stereo) //pp4
0x76, 0x12,
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
//   Type: BiquadCascadeStereo init
0x76, 0x26,
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
// * Create function instance 4 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BiquadCascadeStereo
0x76, 0x11,
0x77, 0x00,
0x78, 0x00,
//   6 buffer pointers
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to DACB_Buf (stereo) //pp5
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACA_Buf (stereo) //pp6
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
//   'Delay line L' points to StaticBuff5 (stereo)
0x76, 0x32,
0x77, 0x00,
0x78, 0x00,
//   'Delay line R' points to StaticBuff6 (stereo)
0x76, 0x33,
0x77, 0x00,
0x78, 0x00,
//   'Scratch memory' points to DynBuffer0 (stereo)
0x76, 0x17,
0x77, 0x00,
0x78, 0x00,
//   'Weights' points to AllPassWeights.txt (stereo)
0x76, 0x4c,
0x77, 0x00,
0x78, 0x00,
//   3 parameters
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   No. biquad sections : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Left shift : 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x07,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 5 *
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
//   'Input' points to DACB_Buf (stereo) //pp7
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (left) //pp8
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   1 parameters
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 6 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BiquadCascadeMono init
0x76, 0x36,
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
// * Create function instance 7 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: BiquadCascadeMono
0x76, 0x35,
0x77, 0x00,
0x78, 0x00,
//   5 buffer pointers
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to DACB_Buf (left) //pp9
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (left) //pp10
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Delay line' points to StaticBuff7 (stereo)
0x76, 0x34,
0x77, 0x00,
0x78, 0x00,
//   'Scratch memory' points to DynBuffer0 (stereo)
0x76, 0x17,
0x77, 0x00,
0x78, 0x00,
//   'Weights' points to AllPassWeights.txt (stereo)
0x76, 0x4c,
0x77, 0x00,
0x78, 0x00,
//   3 parameters
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   No. biquad sections : 1
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Left shift : 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 8 *
0x76, 0x44,
0x77, 0x44,
0x78, 0x44,
//   Type: MonoToStereo
0x76, 0x27,
0x77, 0x00,
0x78, 0x00,
//   2 buffer pointers
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   'Input' points to DACB_Buf (left) //pp11
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to DACB_Buf (stereo) //pp12
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   1 parameters
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Block size (mono samples) : 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 9 *
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
//   'Input' points to DACB_Buf (stereo) //pp13
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
//   'Output' points to I2SA_Out_Buf (stereo) //pp14
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   1 parameters
0x76, 0x01,
0x77, 0x00,
0x78, 0x00,
//   Buffer length (words) : 16
0x76, 0x10,
0x77, 0x00,
0x78, 0x00,
//   Reserved states
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
// * Create function instance 10 *
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
//   block processing interrupt trigger size: 16
0x76, 0x10,
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
//   Select which output I2Ss are synchronous
0x76, 0x07,
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
0x76, 0x04,
0x77, 0x00,
0x78, 0x00,
//   Number of functions in schedule: 11
0x76, 0x0b,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 3
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 6
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 10
0x76, 0x0a,
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
//   function pointer: 4
0x76, 0x04,
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
//   function pointer: 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 9
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
// * Create ping pong schedule *
0x76, 0xff,
0x77, 0xff,
0x78, 0xff,
//   Number of ping pong pointers in schedule  15
0x76, 0x0f,
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
//   ping pong pointer: 7
0x76, 0x07,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 9
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 10
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 11
0x76, 0x0b,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 12
0x76, 0x0c,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 13
0x76, 0x0d,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 14
0x76, 0x0e,
0x77, 0x00,
0x78, 0x00,
// * Create new block pointer schedule *
0x76, 0x20,
0x77, 0x20,
0x78, 0x20,
//   Number of block pointers in schedule 5
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   ADCA_Buf (L)
0x76, 0x06,
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
//   I2SA_In_Buf (L)
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   I2SA_Out_Buf (L)
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
};
#define LynxUseCase3bCommander_withSPK_BB_SIZE	(sizeof(LynxUseCase3bCommander_withSPK_BB)/2)



const u8 LynxUseCase3bCommander_BB_On[] = {
// Tell command interpreter that there are 45 commands including this one
0x76, 0x2d,
0x77, 0x00,
0x78, 0x05,
// * Create function schedule *
0x76, 0x88,
0x77, 0x88,
0x78, 0x88,
//   Number of one time function instances
0x76, 0x04,
0x77, 0x00,
0x78, 0x00,
//   Number of functions in schedule: 11
0x76, 0x0b,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 0
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 3
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 6
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 10
0x76, 0x0a,
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
//   function pointer: 4
0x76, 0x04,
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
//   function pointer: 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 9
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
// * Create ping pong schedule *
0x76, 0xff,
0x77, 0xff,
0x78, 0xff,
//   Number of ping pong pointers in schedule  15
0x76, 0x0f,
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
//   ping pong pointer: 7
0x76, 0x07,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 9
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 10
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 11
0x76, 0x0b,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 12
0x76, 0x0c,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 13
0x76, 0x0d,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 14
0x76, 0x0e,
0x77, 0x00,
0x78, 0x00,
// * Create new block pointer schedule *
0x76, 0x20,
0x77, 0x20,
0x78, 0x20,
//   Number of block pointers in schedule 5
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   ADCA_Buf (L)
0x76, 0x06,
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
//   I2SA_In_Buf (L)
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   I2SA_Out_Buf (L)
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
// * Change ping pong buffer identifier *
0x76, 0xee,
0x77, 0xee,
0x78, 0xee,
// * Number to change *
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
// Ping pong pointer number - 3, mix2Stereo Input
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
// Pointer value - 000012 - DACB_Buf
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
// Ping pong pointer number - 13, BufferCopy Input
0x76, 0x0d,
0x77, 0x00,
0x78, 0x00,
// Pointer value - 000012 - DACB_Buf
0x76, 0x12,
0x77, 0x00,
0x78, 0x00,
};
#define LynxUseCase3bCommander_BB_On_SIZE	(sizeof(LynxUseCase3bCommander_BB_On)/2)




const u8 LynxUseCase3bCommander_BB_Off[] = {
// Tell command interpreter that there are 41 commands including this one
0x76, 0x29,
0x77, 0x00,
0x78, 0x05,
// * Create function schedule *
0x76, 0x88,
0x77, 0x88,
0x78, 0x88,
//   Number of one time function instances
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   Number of functions in schedule: 8
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 0 - BBInit
//76 00 0
//77 00 0
//78 00 0
//   function pointer: 3
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 6
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 10
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 1 - BB
//76 01 0
//77 00 0
//78 00 0
//   function pointer: 2
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 4
0x76, 0x04,
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
//   function pointer: 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   function pointer: 9
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
// * Create ping pong schedule *
0x76, 0xff,
0x77, 0xff,
0x78, 0xff,
//   Number of ping pong pointers in schedule  13
0x76, 0x0d,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 0
//76 00 0
//77 00 0
//78 00 0
//   ping pong pointer: 1
//76 01 0
//77 00 0
//78 00 0
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
//   ping pong pointer: 7
0x76, 0x07,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 8
0x76, 0x08,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 9
0x76, 0x09,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 10
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 11
0x76, 0x0b,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 12
0x76, 0x0c,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 13
0x76, 0x0d,
0x77, 0x00,
0x78, 0x00,
//   ping pong pointer: 14
0x76, 0x0e,
0x77, 0x00,
0x78, 0x00,
// * Create new block pointer schedule *
0x76, 0x20,
0x77, 0x20,
0x78, 0x20,
//   Number of block pointers in schedule 5
0x76, 0x05,
0x77, 0x00,
0x78, 0x00,
//   ADCA_Buf (L)
0x76, 0x06,
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
//   I2SA_In_Buf (L)
0x76, 0x00,
0x77, 0x00,
0x78, 0x00,
//   I2SA_Out_Buf (L)
0x76, 0x0a,
0x77, 0x00,
0x78, 0x00,
// * Change ping pong buffer identifier *
0x76, 0xee,
0x77, 0xee,
0x78, 0xee,
// * Number to change *
0x76, 0x02,
0x77, 0x00,
0x78, 0x00,
// Ping pong pointer number - 3, mix2Stereo Input
0x76, 0x03,
0x77, 0x00,
0x78, 0x00,
// Pointer value - 000006 - ADCA_Buf
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
// Ping pong pointer number - 13, BufferCopy Input
0x76, 0x0d,
0x77, 0x00,
0x78, 0x00,
// Pointer value - 000006 - ADCA_Buf
0x76, 0x06,
0x77, 0x00,
0x78, 0x00,
};
#define LynxUseCase3bCommander_BB_Off_SIZE	(sizeof(LynxUseCase3bCommander_BB_Off)/2)



#endif
