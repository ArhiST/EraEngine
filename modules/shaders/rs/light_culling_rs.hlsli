#ifndef LIGHT_CULLING_H
#define LIGHT_CULLING_H

#define LIGHT_CULLING_TILE_SIZE 16
#define MAX_NUM_LIGHTS_PER_TILE 256 // Total for point and spot lights. Per tile.
#define MAX_NUM_TOTAL_DECALS 256   // Total per frame (not per tile).

#define NUM_DECAL_BUCKETS (MAX_NUM_TOTAL_DECALS / 32)
#define TILE_LIGHT_OFFSET (NUM_DECAL_BUCKETS)

#define MAX_NUM_INDICES_PER_TILE (MAX_NUM_LIGHTS_PER_TILE + NUM_DECAL_BUCKETS)

struct light_culling_frustum_plane
{
    vec3 N;
    float d;
};

struct light_culling_view_frustum
{
    light_culling_frustum_plane planes[4]; // Left, right, top, bottom frustum planes.
};

struct frusta_cb
{
    uint32 numThreadsX;
    uint32 numThreadsY;
};

struct light_culling_cb
{
    uint32 numThreadGroupsX;
    uint32 numPointLights;
    uint32 numSpotLights;
    uint32 numDecals;
};

#define WORLD_SPACE_TILED_FRUSTA_RS \
    "RootFlags(0), " \
    "CBV(b0), " \
    "RootConstants(b1, num32BitConstants = 2), " \
    "UAV(u0)"

#define LIGHT_CULLING_RS \
    "RootFlags(0), " \
    "CBV(b0), " \
    "RootConstants(b1, num32BitConstants = 4), " \
    "DescriptorTable( SRV(t0, numDescriptors = 5), UAV(u0, numDescriptors = 3) )"

#define WORLD_SPACE_TILED_FRUSTA_RS_CAMERA      0
#define WORLD_SPACE_TILED_FRUSTA_RS_CB          1
#define WORLD_SPACE_TILED_FRUSTA_RS_FRUSTA_UAV  2

#define LIGHT_CULLING_RS_CAMERA                 0
#define LIGHT_CULLING_RS_CB                     1
#define LIGHT_CULLING_RS_SRV_UAV                2

#endif
