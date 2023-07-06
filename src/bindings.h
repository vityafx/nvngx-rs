#ifndef BINDINGS_H
#define BINDINGS_H

#include <vulkan/vulkan.h>
#include "../DLSS/include/nvsdk_ngx_vk.h"
#include "../DLSS/include/nvsdk_ngx_helpers.h"
#include "../DLSS/include/nvsdk_ngx_helpers_vk.h"

NVSDK_NGX_Resource_VK HELPERS_NVSDK_NGX_Create_ImageView_Resource_VK(
    VkImageView imageView,
    VkImage image,
    VkImageSubresourceRange subresourceRange,
    VkFormat format,
    unsigned int width,
    unsigned int height,
    bool readWrite);

NVSDK_NGX_Result HELPERS_NGX_DLSS_GET_OPTIMAL_SETTINGS(
    NVSDK_NGX_Parameter *pInParams,
    unsigned int InUserSelectedWidth,
    unsigned int InUserSelectedHeight,
    NVSDK_NGX_PerfQuality_Value InPerfQualityValue,
    unsigned int *pOutRenderOptimalWidth,
    unsigned int *pOutRenderOptimalHeight,
    unsigned int *pOutRenderMaxWidth,
    unsigned int *pOutRenderMaxHeight,
    unsigned int *pOutRenderMinWidth,
    unsigned int *pOutRenderMinHeight,
    float *pOutSharpness);

#endif // BINDINGS_H
