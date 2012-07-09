/**********************************************************************
 *
 * Copyright(c) 2008 Imagination Technologies Ltd. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful but, except
 * as otherwise stated in writing, without any warranty; without even the
 * implied warranty of merchantability or fitness for a particular purpose.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * The full GNU General Public License is included in this distribution in
 * the file called "COPYING".
 *
 * Contact Information:
 * Imagination Technologies Ltd. <gpl-support@imgtec.com>
 * Home Park Estate, Kings Langley, Herts, WD4 8LZ, UK
 *
 ******************************************************************************/

#if !defined(__SERVICESEXT_H__)
#define __SERVICESEXT_H__

#include "img_types.h"

#define PVRSRV_LOCKFLG_READONLY			1

enum PVRSRV_ERROR {
	PVRSRV_OK				=  0,
	PVRSRV_ERROR_GENERIC			=  1,
	PVRSRV_ERROR_OUT_OF_MEMORY		=  2,
	PVRSRV_ERROR_TOO_FEW_BUFFERS		=  3,
	PVRSRV_ERROR_SYMBOL_NOT_FOUND		=  4,
	PVRSRV_ERROR_OUT_OF_HSPACE		=  5,
	PVRSRV_ERROR_INVALID_PARAMS		=  6,
	PVRSRV_ERROR_TILE_MAP_FAILED		=  7,
	PVRSRV_ERROR_INIT_FAILURE		=  8,
	PVRSRV_ERROR_CANT_REGISTER_CALLBACK	=  9,
	PVRSRV_ERROR_INVALID_DEVICE		=  10,
	PVRSRV_ERROR_NOT_OWNER			=  11,
	PVRSRV_ERROR_BAD_MAPPING		=  12,
	PVRSRV_ERROR_TIMEOUT			=  13,
	PVRSRV_ERROR_NO_PRIMARY			=  14,
	PVRSRV_ERROR_FLIP_CHAIN_EXISTS		=  15,
	PVRSRV_ERROR_CANNOT_ACQUIRE_SYSDATA	=  16,
	PVRSRV_ERROR_SCENE_INVALID		=  17,
	PVRSRV_ERROR_STREAM_ERROR		=  18,
	PVRSRV_ERROR_INVALID_INTERRUPT		=  19,
	PVRSRV_ERROR_FAILED_DEPENDENCIES	=  20,
	PVRSRV_ERROR_CMD_NOT_PROCESSED		=  21,
	PVRSRV_ERROR_CMD_TOO_BIG		=  22,
	PVRSRV_ERROR_DEVICE_REGISTER_FAILED	=  23,
	PVRSRV_ERROR_FIFO_SPACE			=  24,
	PVRSRV_ERROR_TA_RECOVERY		=  25,
	PVRSRV_ERROR_INDOSORLOWPOWER		=  26,
	PVRSRV_ERROR_TOOMANYBUFFERS		=  27,
	PVRSRV_ERROR_NOT_SUPPORTED		=  28,
	PVRSRV_ERROR_PROCESSING_BLOCKED		=  29,

	PVRSRV_ERROR_CANNOT_FLUSH_QUEUE		=  31,
	PVRSRV_ERROR_CANNOT_GET_QUEUE_SPACE		=  32,
	PVRSRV_ERROR_CANNOT_GET_RENDERDETAILS		=  33,
	PVRSRV_ERROR_RETRY		=  34,

	PVRSRV_ERROR_DDK_VERSION_MISMATCH	=  35,
	PVRSRV_ERROR_BUILD_MISMATCH	=  36,

	PVRSRV_ERROR_FORCE_I32	=  0x7fffffff
};

enum PVRSRV_DEVICE_CLASS {
	PVRSRV_DEVICE_CLASS_3D = 0,
	PVRSRV_DEVICE_CLASS_DISPLAY = 1,
	PVRSRV_DEVICE_CLASS_BUFFER = 2,
	PVRSRV_DEVICE_CLASS_VIDEO = 3,

	PVRSRV_DEVICE_CLASS_FORCE_I32 = 0x7fffffff
};

enum PVR_POWER_STATE {
	PVRSRV_POWER_Unspecified = -1,
	PVRSRV_POWER_STATE_D0 = 0,
	PVRSRV_POWER_STATE_D1 = 1,
	PVRSRV_POWER_STATE_D2 = 2,
	PVRSRV_POWER_STATE_D3 = 3,
	PVRSRV_POWER_STATE_D4 = 4,

	PVRSRV_POWER_STATE_FORCE_I32 = 0x7fffffff
};

enum PVRSRV_PIXEL_FORMAT {
	PVRSRV_PIXEL_FORMAT_UNKNOWN = 0,
	PVRSRV_PIXEL_FORMAT_RGB565 = 1,
	PVRSRV_PIXEL_FORMAT_RGB555 = 2,
	PVRSRV_PIXEL_FORMAT_RGB888 = 3,
	PVRSRV_PIXEL_FORMAT_BGR888 = 4,
	PVRSRV_PIXEL_FORMAT_GREY_SCALE = 8,
	PVRSRV_PIXEL_FORMAT_PAL12 = 13,
	PVRSRV_PIXEL_FORMAT_PAL8 = 14,
	PVRSRV_PIXEL_FORMAT_PAL4 = 15,
	PVRSRV_PIXEL_FORMAT_PAL2 = 16,
	PVRSRV_PIXEL_FORMAT_PAL1 = 17,
	PVRSRV_PIXEL_FORMAT_ARGB1555 = 18,
	PVRSRV_PIXEL_FORMAT_ARGB4444 = 19,
	PVRSRV_PIXEL_FORMAT_ARGB8888 = 20,
	PVRSRV_PIXEL_FORMAT_ABGR8888 = 21,
	PVRSRV_PIXEL_FORMAT_YV12 = 22,
	PVRSRV_PIXEL_FORMAT_I420 = 23,
	PVRSRV_PIXEL_FORMAT_IMC2 = 25,

	PVRSRV_PIXEL_FORMAT_XRGB8888,
	PVRSRV_PIXEL_FORMAT_XBGR8888,
	PVRSRV_PIXEL_FORMAT_XRGB4444,
	PVRSRV_PIXEL_FORMAT_ARGB8332,
	PVRSRV_PIXEL_FORMAT_A2RGB10,
	PVRSRV_PIXEL_FORMAT_A2BGR10,
	PVRSRV_PIXEL_FORMAT_P8,
	PVRSRV_PIXEL_FORMAT_L8,
	PVRSRV_PIXEL_FORMAT_A8L8,
	PVRSRV_PIXEL_FORMAT_A4L4,
	PVRSRV_PIXEL_FORMAT_L16,
	PVRSRV_PIXEL_FORMAT_L6V5U5,
	PVRSRV_PIXEL_FORMAT_V8U8,
	PVRSRV_PIXEL_FORMAT_V16U16,
	PVRSRV_PIXEL_FORMAT_QWVU8888,
	PVRSRV_PIXEL_FORMAT_XLVU8888,
	PVRSRV_PIXEL_FORMAT_QWVU16,
	PVRSRV_PIXEL_FORMAT_D16,
	PVRSRV_PIXEL_FORMAT_D24S8,
	PVRSRV_PIXEL_FORMAT_D24X8,

	PVRSRV_PIXEL_FORMAT_ABGR16,
	PVRSRV_PIXEL_FORMAT_ABGR16F,
	PVRSRV_PIXEL_FORMAT_ABGR32,
	PVRSRV_PIXEL_FORMAT_ABGR32F,
	PVRSRV_PIXEL_FORMAT_B10GR11,
	PVRSRV_PIXEL_FORMAT_GR88,
	PVRSRV_PIXEL_FORMAT_BGR32,
	PVRSRV_PIXEL_FORMAT_GR32,
	PVRSRV_PIXEL_FORMAT_E5BGR9,

	PVRSRV_PIXEL_FORMAT_DXT1,
	PVRSRV_PIXEL_FORMAT_DXT23,
	PVRSRV_PIXEL_FORMAT_DXT45,

	PVRSRV_PIXEL_FORMAT_R8G8_B8G8,
	PVRSRV_PIXEL_FORMAT_G8R8_G8B8,

	PVRSRV_PIXEL_FORMAT_NV11,
	PVRSRV_PIXEL_FORMAT_NV12,

	PVRSRV_PIXEL_FORMAT_YUY2,
	PVRSRV_PIXEL_FORMAT_YUV420,
	PVRSRV_PIXEL_FORMAT_YUV444,
	PVRSRV_PIXEL_FORMAT_VUY444,
	PVRSRV_PIXEL_FORMAT_YUYV,
	PVRSRV_PIXEL_FORMAT_YVYU,
	PVRSRV_PIXEL_FORMAT_UYVY,
	PVRSRV_PIXEL_FORMAT_VYUY,

	PVRSRV_PIXEL_FORMAT_FOURCC_ORG_UYVY,
	PVRSRV_PIXEL_FORMAT_FOURCC_ORG_YUYV,
	PVRSRV_PIXEL_FORMAT_FOURCC_ORG_YVYU,
	PVRSRV_PIXEL_FORMAT_FOURCC_ORG_VYUY,

	PVRSRV_PIXEL_FORMAT_A32B32G32R32,
	PVRSRV_PIXEL_FORMAT_A32B32G32R32F,
	PVRSRV_PIXEL_FORMAT_A32B32G32R32_UINT,
	PVRSRV_PIXEL_FORMAT_A32B32G32R32_SINT,

	PVRSRV_PIXEL_FORMAT_B32G32R32,
	PVRSRV_PIXEL_FORMAT_B32G32R32F,
	PVRSRV_PIXEL_FORMAT_B32G32R32_UINT,
	PVRSRV_PIXEL_FORMAT_B32G32R32_SINT,

	PVRSRV_PIXEL_FORMAT_G32R32,
	PVRSRV_PIXEL_FORMAT_G32R32F,
	PVRSRV_PIXEL_FORMAT_G32R32_UINT,
	PVRSRV_PIXEL_FORMAT_G32R32_SINT,

	PVRSRV_PIXEL_FORMAT_D32F,
	PVRSRV_PIXEL_FORMAT_R32,
	PVRSRV_PIXEL_FORMAT_R32F,
	PVRSRV_PIXEL_FORMAT_R32_UINT,
	PVRSRV_PIXEL_FORMAT_R32_SINT,

	PVRSRV_PIXEL_FORMAT_A16B16G16R16,
	PVRSRV_PIXEL_FORMAT_A16B16G16R16F,
	PVRSRV_PIXEL_FORMAT_A16B16G16R16_SINT,
	PVRSRV_PIXEL_FORMAT_A16B16G16R16_SNORM,
	PVRSRV_PIXEL_FORMAT_A16B16G16R16_UINT,
	PVRSRV_PIXEL_FORMAT_A16B16G16R16_UNORM,

	PVRSRV_PIXEL_FORMAT_G16R16,
	PVRSRV_PIXEL_FORMAT_G16R16F,
	PVRSRV_PIXEL_FORMAT_G16R16_UINT,
	PVRSRV_PIXEL_FORMAT_G16R16_UNORM,
	PVRSRV_PIXEL_FORMAT_G16R16_SINT,
	PVRSRV_PIXEL_FORMAT_G16R16_SNORM,

	PVRSRV_PIXEL_FORMAT_R16,
	PVRSRV_PIXEL_FORMAT_R16F,
	PVRSRV_PIXEL_FORMAT_R16_UINT,
	PVRSRV_PIXEL_FORMAT_R16_UNORM,
	PVRSRV_PIXEL_FORMAT_R16_SINT,
	PVRSRV_PIXEL_FORMAT_R16_SNORM,

	PVRSRV_PIXEL_FORMAT_A8B8G8R8,
	PVRSRV_PIXEL_FORMAT_A8B8G8R8_UINT,
	PVRSRV_PIXEL_FORMAT_A8B8G8R8_UNORM,
	PVRSRV_PIXEL_FORMAT_A8B8G8R8_SINT,
	PVRSRV_PIXEL_FORMAT_A8B8G8R8_SNORM,

	PVRSRV_PIXEL_FORMAT_G8R8,
	PVRSRV_PIXEL_FORMAT_G8R8_UINT,
	PVRSRV_PIXEL_FORMAT_G8R8_UNORM,
	PVRSRV_PIXEL_FORMAT_G8R8_SINT,
	PVRSRV_PIXEL_FORMAT_G8R8_SNORM,

	PVRSRV_PIXEL_FORMAT_A8,
	PVRSRV_PIXEL_FORMAT_R8,
	PVRSRV_PIXEL_FORMAT_R8_UINT,
	PVRSRV_PIXEL_FORMAT_R8_UNORM,
	PVRSRV_PIXEL_FORMAT_R8_SINT,
	PVRSRV_PIXEL_FORMAT_R8_SNORM,

	PVRSRV_PIXEL_FORMAT_A2B10G10R10,
	PVRSRV_PIXEL_FORMAT_A2B10G10R10_UNORM,
	PVRSRV_PIXEL_FORMAT_A2B10G10R10_UINT,

	PVRSRV_PIXEL_FORMAT_B10G11R11,
	PVRSRV_PIXEL_FORMAT_B10G11R11F,

	PVRSRV_PIXEL_FORMAT_X24G8R32,
	PVRSRV_PIXEL_FORMAT_G8R24,
	PVRSRV_PIXEL_FORMAT_E5B9G9R9,
	PVRSRV_PIXEL_FORMAT_R1,

	PVRSRV_PIXEL_FORMAT_BC1,
	PVRSRV_PIXEL_FORMAT_BC1_UNORM,
	PVRSRV_PIXEL_FORMAT_BC1_SRGB,
	PVRSRV_PIXEL_FORMAT_BC2,
	PVRSRV_PIXEL_FORMAT_BC2_UNORM,
	PVRSRV_PIXEL_FORMAT_BC2_SRGB,
	PVRSRV_PIXEL_FORMAT_BC3,
	PVRSRV_PIXEL_FORMAT_BC3_UNORM,
	PVRSRV_PIXEL_FORMAT_BC3_SRGB,
	PVRSRV_PIXEL_FORMAT_BC4,
	PVRSRV_PIXEL_FORMAT_BC4_UNORM,
	PVRSRV_PIXEL_FORMAT_BC4_SNORM,
	PVRSRV_PIXEL_FORMAT_BC5,
	PVRSRV_PIXEL_FORMAT_BC5_UNORM,
	PVRSRV_PIXEL_FORMAT_BC5_SNORM,

	PVRSRV_PIXEL_FORMAT_FORCE_I32 = 0x7fffffff,
};

enum PVRSRV_ALPHA_FORMAT {
	PVRSRV_ALPHA_FORMAT_UNKNOWN = 0x00000000,
	PVRSRV_ALPHA_FORMAT_PRE = 0x00000001,
	PVRSRV_ALPHA_FORMAT_NONPRE = 0x00000002,
	PVRSRV_ALPHA_FORMAT_MASK = 0x0000000F,
};

enum PVRSRV_COLOURSPACE_FORMAT {
	PVRSRV_COLOURSPACE_FORMAT_UNKNOWN = 0x00000000,
	PVRSRV_COLOURSPACE_FORMAT_LINEAR = 0x00010000,
	PVRSRV_COLOURSPACE_FORMAT_NONLINEAR = 0x00020000,
	PVRSRV_COLOURSPACE_FORMAT_MASK = 0x000F0000,
};

enum PVRSRV_ROTATION {
	PVRSRV_ROTATE_0 = 0,
	PVRSRV_ROTATE_90 = 1,
	PVRSRV_ROTATE_180 = 2,
	PVRSRV_ROTATE_270 = 3,
	PVRSRV_FLIP_Y
};

#define PVRSRV_CREATE_SWAPCHAIN_SHARED		(1<<0)
#define PVRSRV_CREATE_SWAPCHAIN_QUERY		(1<<1)
#define PVRSRV_CREATE_SWAPCHAIN_OEMOVERLAY	(1<<2)

struct PVRSRV_SYNC_DATA {

	u32 ui32WriteOpsPending;
	volatile u32 ui32WriteOpsComplete;

	u32 ui32ReadOpsPending;
	volatile u32 ui32ReadOpsComplete;

	u32 ui32LastOpDumpVal;
	u32 ui32LastReadOpDumpVal;

};

struct PVRSRV_CLIENT_SYNC_INFO {
	struct PVRSRV_SYNC_DATA *psSyncData;
	struct IMG_DEV_VIRTADDR sWriteOpsCompleteDevVAddr;
	struct IMG_DEV_VIRTADDR sReadOpsCompleteDevVAddr;
	void *hMappingInfo;
	void *hKernelSyncInfo;
};

struct PVRSRV_RESOURCE {
	volatile u32 ui32Lock;
	u32 ui32ID;
};

struct IMG_RECT {
	s32 x0;
	s32 y0;
	s32 x1;
	s32 y1;
};

struct IMG_RECT_16 {
	s16 x0;
	s16 y0;
	s16 x1;
	s16 y1;
};

struct DISPLAY_DIMS {
	u32 ui32ByteStride;
	u32 ui32Width;
	u32 ui32Height;
};

struct DISPLAY_FORMAT {
	enum PVRSRV_PIXEL_FORMAT pixelformat;
};

struct DISPLAY_SURF_ATTRIBUTES {
	enum PVRSRV_PIXEL_FORMAT pixelformat;
	struct DISPLAY_DIMS sDims;
};

struct DISPLAY_MODE_INFO {
	enum PVRSRV_PIXEL_FORMAT pixelformat;
	struct DISPLAY_DIMS sDims;
	u32 ui32RefreshHZ;
	u32 ui32OEMFlags;
};

#define MAX_DISPLAY_NAME_SIZE	(50)

struct DISPLAY_INFO {
	u32 ui32MaxSwapChains;
	u32 ui32MaxSwapChainBuffers;
	u32 ui32MinSwapInterval;
	u32 ui32MaxSwapInterval;
	char szDisplayName[MAX_DISPLAY_NAME_SIZE];
};

struct ACCESS_INFO {
	u32 ui32Size;
	u32 ui32FBPhysBaseAddress;
	u32 ui32FBMemAvailable;
	u32 ui32SysPhysBaseAddress;
	u32 ui32SysSize;
	u32 ui32DevIRQ;
};

struct PVRSRV_CURSOR_SHAPE {
	u16 ui16Width;
	u16 ui16Height;
	s16 i16XHot;
	s16 i16YHot;

	void *pvMask;
	s16 i16MaskByteStride;

	void *pvColour;
	s16 i16ColourByteStride;
	enum PVRSRV_PIXEL_FORMAT eColourPixelFormat;
};

#define PVRSRV_SET_CURSOR_VISIBILITY	(1<<0)
#define PVRSRV_SET_CURSOR_POSITION		(1<<1)
#define PVRSRV_SET_CURSOR_SHAPE			(1<<2)
#define PVRSRV_SET_CURSOR_ROTATION		(1<<3)

struct PVRSRV_CURSOR_INFO {
	u32 ui32Flags;
	IMG_BOOL bVisible;
	s16 i16XPos;
	s16 i16YPos;
	struct PVRSRV_CURSOR_SHAPE sCursorShape;
	u32 ui32Rotation;
};

struct PVRSRV_REGISTRY_INFO {
	u32 ui32DevCookie;
	char *pszKey;
	char *pszValue;
	char *pszBuf;
	u32 ui32BufSize;
};

enum PVRSRV_ERROR PVRSRVReadRegistryString(
				struct PVRSRV_REGISTRY_INFO *psRegInfo);
enum PVRSRV_ERROR PVRSRVWriteRegistryString(
				struct PVRSRV_REGISTRY_INFO *psRegInfo);

#define PVRSRV_BC_FLAGS_YUVCSC_CONFORMANT_RANGE	(0 << 0)
#define PVRSRV_BC_FLAGS_YUVCSC_FULL_RANGE		(1 << 0)

#define PVRSRV_BC_FLAGS_YUVCSC_BT601			(0 << 1)
#define PVRSRV_BC_FLAGS_YUVCSC_BT709			(1 << 1)

struct BUFFER_INFO {
	u32 ui32BufferCount;
	u32 ui32BufferDeviceID;
	enum PVRSRV_PIXEL_FORMAT pixelformat;
	u32 ui32ByteStride;
	u32 ui32Width;
	u32 ui32Height;
	u32 ui32Flags;
};

enum OVERLAY_DEINTERLACE_MODE {
	WEAVE = 0x0,
	BOB_ODD,
	BOB_EVEN,
	BOB_EVEN_NONINTERLEAVED
};

#endif