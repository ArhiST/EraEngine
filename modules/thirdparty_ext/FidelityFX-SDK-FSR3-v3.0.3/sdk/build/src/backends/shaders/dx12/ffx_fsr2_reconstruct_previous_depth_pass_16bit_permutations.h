#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d.h"

typedef union ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationKey;

typedef struct ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;


    const uint32_t  numConstantBuffers;
    const char**    constantBufferNames;
    const uint32_t* constantBufferBindings;
    const uint32_t* constantBufferCounts;
    const uint32_t* constantBufferSpaces;

    const uint32_t  numSRVTextures;
    const char**    srvTextureNames;
    const uint32_t* srvTextureBindings;
    const uint32_t* srvTextureCounts;
    const uint32_t* srvTextureSpaces;

    const uint32_t  numUAVTextures;
    const char**    uavTextureNames;
    const uint32_t* uavTextureBindings;
    const uint32_t* uavTextureCounts;
    const uint32_t* uavTextureSpaces;

    const uint32_t  numSRVBuffers;
    const char**    srvBufferNames;
    const uint32_t* srvBufferBindings;
    const uint32_t* srvBufferCounts;
    const uint32_t* srvBufferSpaces;

    const uint32_t  numUAVBuffers;
    const char**    uavBufferNames;
    const uint32_t* uavBufferBindings;
    const uint32_t* uavBufferCounts;
    const uint32_t* uavBufferSpaces;

    const uint32_t  numSamplers;
    const char**    samplerNames;
    const uint32_t* samplerBindings;
    const uint32_t* samplerCounts;
    const uint32_t* samplerSpaces;

    const uint32_t  numRTAccelerationStructures;
    const char**    rtAccelerationStructureNames;
    const uint32_t* rtAccelerationStructureBindings;
    const uint32_t* rtAccelerationStructureCounts;
    const uint32_t* rtAccelerationStructureSpaces;
} ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_IndirectionTable[] = {
    15,
    15,
    7,
    7,
    11,
    11,
    2,
    2,
    12,
    12,
    5,
    5,
    9,
    9,
    0,
    0,
    14,
    14,
    6,
    6,
    10,
    10,
    3,
    3,
    13,
    13,
    4,
    4,
    8,
    8,
    1,
    1,
    15,
    15,
    7,
    7,
    11,
    11,
    2,
    2,
    12,
    12,
    5,
    5,
    9,
    9,
    0,
    0,
    14,
    14,
    6,
    6,
    10,
    10,
    3,
    3,
    13,
    13,
    4,
    4,
    8,
    8,
    1,
    1,
};

static const ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationInfo g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationInfo[] = {
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_2ede7fdab81813655f4877e3ec146819_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_1367a39f18088df4a604142e670597c4_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_c3cf36d8c43edc42788bafbf570d56ef_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e50b642f91bb176300e493684b4a048a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_69bc531740e54d2de7064ebfdcd0dd77_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_eb37826ac2adedc74a3450667973ae39_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6bdbd84108077f75b06be5afe37de38b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_ecf3747f438b43bd98c6b5a171a971a4_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5d65822fc9f03259026ceb457c9df03_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_31634cf74c8557d1e01fe530905ea51b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a11f4d6f8a632da1461012eb69f01c41_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_6dc24bde84b699ac5823e5bcb8d9f161_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_e5ab2b4ba7036af9808bb6df0d87773e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_28e516bdc83f16fdfcf2ae2291ad9362_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_a853ff47fb1cc411ce82642d4be5f5da_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0f7517cb6a6ade5276e9c0d190324e4d_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

