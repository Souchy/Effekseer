#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tps_3_0 /Emain /Fh ShaderHeader/model_lit_ps.h
//    Shader/model_lit_ps.fx
//
//
// Parameters:
//
//   sampler2D Sampler_g_colorSampler;
//   sampler2D Sampler_g_normalSampler;
//   float4 _79_fLightAmbient;
//   float4 _79_fLightColor;
//   float4 _79_fLightDirection;
//
//
// Registers:
//
//   Name                    Reg   Size
//   ----------------------- ----- ----
//   _79_fLightDirection     c0       1
//   _79_fLightColor         c1       1
//   _79_fLightAmbient       c2       1
//   Sampler_g_colorSampler  s0       1
//   Sampler_g_normalSampler s1       1
//

    ps_3_0
    def c3, -1, -0, -0.5, 0
    dcl_texcoord_centroid v0.xy
    dcl_texcoord1 v1.xyz
    dcl_texcoord2 v2.xyz
    dcl_texcoord3 v3.xyz
    dcl_texcoord4_centroid v4
    dcl_2d s0
    dcl_2d s1
    texld r0, v0, s0
    mul r0, r0, v4
    cmp r1, -r0_abs.w, c3.x, c3.y
    texkill r1
    texld r1, v0, s1
    add r1.xyz, r1, c3.z
    add r1.xyz, r1, r1
    mul r2.xyz, r1.y, v2
    mad r1.xyw, r1.x, v3.xyzz, r2.xyzz
    mad r1.xyz, r1.z, v1, r1.xyww
    nrm r2.xyz, r1
    dp3 r1.x, c0, r2
    mul r1.yzw, r1.x, c1.xxyz
    cmp r1.xyz, r1.x, r1.yzww, c3.w
    add r1.xyz, r1, c2
    mul oC0.xyz, r0, r1
    mov oC0.w, r0.w

// approximately 19 instruction slots used (2 texture, 17 arithmetic)
#endif

const BYTE g_ps30_main[] =
{
      0,   3, 255, 255, 254, 255, 
     85,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  31,   1, 
      0,   0,   0,   3, 255, 255, 
      5,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
     24,   1,   0,   0, 128,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   2,   0, 152,   0, 
      0,   0,   0,   0,   0,   0, 
    168,   0,   0,   0,   3,   0, 
      1,   0,   1,   0,   6,   0, 
    192,   0,   0,   0,   0,   0, 
      0,   0, 208,   0,   0,   0, 
      2,   0,   2,   0,   1,   0, 
     10,   0, 228,   0,   0,   0, 
      0,   0,   0,   0, 244,   0, 
      0,   0,   2,   0,   1,   0, 
      1,   0,   6,   0, 228,   0, 
      0,   0,   0,   0,   0,   0, 
      4,   1,   0,   0,   2,   0, 
      0,   0,   1,   0,   2,   0, 
    228,   0,   0,   0,   0,   0, 
      0,   0,  83,  97, 109, 112, 
    108, 101, 114,  95, 103,  95, 
     99, 111, 108, 111, 114,  83, 
     97, 109, 112, 108, 101, 114, 
      0, 171,   4,   0,  12,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     83,  97, 109, 112, 108, 101, 
    114,  95, 103,  95, 110, 111, 
    114, 109,  97, 108,  83,  97, 
    109, 112, 108, 101, 114,   0, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  95,  55, 
     57,  95, 102,  76, 105, 103, 
    104, 116,  65, 109,  98, 105, 
    101, 110, 116,   0, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  95,  55, 
     57,  95, 102,  76, 105, 103, 
    104, 116,  67, 111, 108, 111, 
    114,   0,  95,  55,  57,  95, 
    102,  76, 105, 103, 104, 116, 
     68, 105, 114, 101,  99, 116, 
    105, 111, 110,   0, 112, 115, 
     95,  51,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  57,  46,  57,  53,  50, 
     46,  51,  49,  49,  49,   0, 
     81,   0,   0,   5,   3,   0, 
     15, 160,   0,   0, 128, 191, 
      0,   0,   0, 128,   0,   0, 
      0, 191,   0,   0,   0,   0, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   0,   0,  67, 144, 
     31,   0,   0,   2,   5,   0, 
      1, 128,   1,   0,   7, 144, 
     31,   0,   0,   2,   5,   0, 
      2, 128,   2,   0,   7, 144, 
     31,   0,   0,   2,   5,   0, 
      3, 128,   3,   0,   7, 144, 
     31,   0,   0,   2,   5,   0, 
      4, 128,   4,   0,  79, 144, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   0,   8,  15, 160, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   1,   8,  15, 160, 
     66,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 144, 
      0,   8, 228, 160,   5,   0, 
      0,   3,   0,   0,  15, 128, 
      0,   0, 228, 128,   4,   0, 
    228, 144,  88,   0,   0,   4, 
      1,   0,  15, 128,   0,   0, 
    255, 140,   3,   0,   0, 160, 
      3,   0,  85, 160,  65,   0, 
      0,   1,   1,   0,  15, 128, 
     66,   0,   0,   3,   1,   0, 
     15, 128,   0,   0, 228, 144, 
      1,   8, 228, 160,   2,   0, 
      0,   3,   1,   0,   7, 128, 
      1,   0, 228, 128,   3,   0, 
    170, 160,   2,   0,   0,   3, 
      1,   0,   7, 128,   1,   0, 
    228, 128,   1,   0, 228, 128, 
      5,   0,   0,   3,   2,   0, 
      7, 128,   1,   0,  85, 128, 
      2,   0, 228, 144,   4,   0, 
      0,   4,   1,   0,  11, 128, 
      1,   0,   0, 128,   3,   0, 
    164, 144,   2,   0, 164, 128, 
      4,   0,   0,   4,   1,   0, 
      7, 128,   1,   0, 170, 128, 
      1,   0, 228, 144,   1,   0, 
    244, 128,  36,   0,   0,   2, 
      2,   0,   7, 128,   1,   0, 
    228, 128,   8,   0,   0,   3, 
      1,   0,   1, 128,   0,   0, 
    228, 160,   2,   0, 228, 128, 
      5,   0,   0,   3,   1,   0, 
     14, 128,   1,   0,   0, 128, 
      1,   0, 144, 160,  88,   0, 
      0,   4,   1,   0,   7, 128, 
      1,   0,   0, 128,   1,   0, 
    249, 128,   3,   0, 255, 160, 
      2,   0,   0,   3,   1,   0, 
      7, 128,   1,   0, 228, 128, 
      2,   0, 228, 160,   5,   0, 
      0,   3,   0,   8,   7, 128, 
      0,   0, 228, 128,   1,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   8,   8, 128,   0,   0, 
    255, 128, 255, 255,   0,   0
};
