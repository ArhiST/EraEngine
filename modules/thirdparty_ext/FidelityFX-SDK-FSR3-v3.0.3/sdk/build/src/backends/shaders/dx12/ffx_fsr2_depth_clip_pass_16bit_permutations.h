#include "ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a.h"
#include "ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226.h"
#include "ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304.h"
#include "ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3.h"
#include "ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af.h"
#include "ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d.h"
#include "ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9.h"
#include "ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716.h"

typedef union ffx_fsr2_depth_clip_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_depth_clip_pass_16bit_PermutationKey;

typedef struct ffx_fsr2_depth_clip_pass_16bit_PermutationInfo {
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
} ffx_fsr2_depth_clip_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr2_depth_clip_pass_16bit_IndirectionTable[] = {
    7,
    7,
    7,
    7,
    1,
    1,
    1,
    1,
    5,
    5,
    5,
    5,
    3,
    3,
    3,
    3,
    6,
    6,
    6,
    6,
    2,
    2,
    2,
    2,
    4,
    4,
    4,
    4,
    0,
    0,
    0,
    0,
    7,
    7,
    7,
    7,
    1,
    1,
    1,
    1,
    5,
    5,
    5,
    5,
    3,
    3,
    3,
    3,
    6,
    6,
    6,
    6,
    2,
    2,
    2,
    2,
    4,
    4,
    4,
    4,
    0,
    0,
    0,
    0,
};

static const ffx_fsr2_depth_clip_pass_16bit_PermutationInfo g_ffx_fsr2_depth_clip_pass_16bit_PermutationInfo[] = {
    { g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_size, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_data, 1, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_ec75f4dac4f8a193e6a43c89dbcd030a_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_size, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_data, 1, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_c07d782d89623472d75b85cf73e25226_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_size, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_data, 1, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_91a84ff2e36b5af77da7ae49fc596304_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_size, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_data, 1, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_34cdea062a2c5fc79423ad3de4e190c3_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_size, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_data, 1, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_413ae0a8e829ac6b36292c64598f34af_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_size, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_data, 1, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_3416a197b2f9b5a4f88a14b7335c9f8d_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_size, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_data, 1, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_ca1b983a1170caf523ba6dcd86a220d9_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_size, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_data, 1, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_16bit_c2906074e76ec00d1f1bab918bcb6716_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

