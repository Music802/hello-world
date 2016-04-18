#ifndef _COLOR_DEFINE_H_
#define _COLOR_DEFINE_H_

/*===========================================================================
 * Include file 
 *===========================================================================*/ 

#include "AHC_Common.h"

/*===========================================================================
 * Macro define 
 *===========================================================================*/ 
#define RGB565_COLOR_BLACK      0x000000
#define RGB565_COLOR_RED        0x0000FF
#define RGB565_COLOR_WHITE      0xFFFFFF
#define RGB565_COLOR_YELLOW     0x00FFFF
#define RGB565_COLOR_BLUE       0xFF0000
#define RGB565_COLOR_BLUE2      0xE2A335
#define RGB565_COLOR_GRAY		0x818181
#define RGB565_COLOR_GREEN      0x00FF00
#define RGB565_COLOR_ORANGE     0x00A5FF
#define RGB565_COLOR_NA         0x101010
#define RGB565_COLOR_NA2        0x404090

#define	OSD_COLOR_TRANSPARENT	0x00000000
#define	OSD_COLOR_LIGHTGRAY		0xFFD3D3D3
#define	OSD_COLOR_LIGHTBLUE		0xFFFF8080
#define	OSD_COLOR_LIGHTGREEN	0xFF80FF80
#define	OSD_COLOR_LIGHTCYAN		0xFF80FFFF
#define	OSD_COLOR_LIGHTRED		0xFF8080FF
#define	OSD_COLOR_LIGHTMAGENTA	0xFFFF80FF
#define	OSD_COLOR_DARKGRAY		0xFF606060 
#define	OSD_COLOR_DARKGRAY2		0xFF202020 
#define	OSD_COLOR_DARKGRAY3		0xFF020202 
#define	OSD_COLOR_DARKGRAY4		0xFFA0A0A0 
#define	OSD_COLOR_DARKGRAY5		0xFFBDBDBD 
#define	OSD_COLOR_ALPHADARKGRAY	0x88787878
#define	OSD_COLOR_ALPHBLUE  	0x88E87917
#define OSD_COLOR_DARKRED		0xFF000080
#define OSD_COLOR_DARKGREEN		0xFF119151
#define OSD_COLOR_DARKBLUE      0xFF800000
#define	OSD_COLOR_DARKYELLOW    0xFF25A6E9
#define	OSD_COLOR_BLACK			0xFF000000
#define	OSD_COLOR_BLUE			0xFFFF0000
#define	OSD_COLOR_BLUE2			0xFFFAC896
#define	OSD_COLOR_BLUE3			0xFFF29E34
#define	OSD_COLOR_GREEN			0xFF00FF00
#define	OSD_COLOR_CYAN			0xFFFFFF00
#define	OSD_COLOR_RED		    0xFF0000FF
#define	OSD_COLOR_RED2		    0xFF1010F0
#define	OSD_COLOR_MAGENTA		0xFF8B008B
#define	OSD_COLOR_BROWN			0xFF2A2AA5
#define	OSD_COLOR_GRAY			0xFF808080
#define	OSD_COLOR_ORANGE		0xFF0080FF
#define	OSD_COLOR_YELLOW		0xFF00FFFF
#define	OSD_COLOR_WHITE			0xFFFFFFFF

#define	OSD_OPACITY_0			0xFF000000
#define	OSD_OPACITY_50			0x80000000
#define	OSD_OPCAITY_100			0x00000000

#define OSD_COLOR_TV_BACKGROUND	0x00560000

#if 1
#define OSD_THUMB_BACKGROUND   0x00202020
#define OSD_COLOR_BACKGROUND   0x90202020
#define OSD_COLOR_FONT         0xFFFFFFFF
#define OSD_COLOR_FRAME        0xFFA0A0A0
#define OSD_COLOR_FILL         0xFF100000
#define OSD_COLOR_SUB_FILL     0xFF502020
#define OSD_COLOR_SELECT       0xFF1590d0
#define OSD_COLOR_SELECTED     OSD_COLOR_YELLOW
#define OSD_COLOR_TITLE        OSD_COLOR_BLACK
#define OSD_COLOR_HIDE		   OSD_COLOR_BLACK
#else
#define OSD_COLOR_FRAME        OSD_COLOR_WHITE
#define OSD_COLOR_FILL         OSD_COLOR_CYAN
#define OSD_COLOR_SELECT       OSD_COLOR_YELLOW
#define OSD_COLOR_TITLE        OSD_COLOR_CYAN
#endif

#endif//_COLOR_DEFINE_H_