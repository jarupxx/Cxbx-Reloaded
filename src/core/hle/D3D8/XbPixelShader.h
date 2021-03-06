// ******************************************************************
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************
#ifndef XBPIXELSHADER_H
#define XBPIXELSHADER_H

#pragma once

#include "Cxbx.h"

// dump pixel shader definition to file
void DumpPixelShaderDefToFile( XTL::X_D3DPIXELSHADERDEF* pPSDef, const char* pszCode );
// print relevant contents to the debug console
void PrintPixelShaderDefContents(XTL::X_D3DPIXELSHADERDEF* pDSDef );

// PatrickvL's Dxbx pixel shader translation
VOID DxbxUpdateActivePixelShader(); // NOPATCH

// TODO: Remove this once the Render State code has been fully ported from Dxbx/Wip_LessVertexPatching
extern DWORD TemporaryPixelShaderRenderStates[XTL::X_D3DRS_PSTEXTUREMODES + 1];

#endif // PIXELSHADER_H
