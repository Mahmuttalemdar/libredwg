/*****************************************************************************/
/*  LibreDWG - free implementation of the DWG file format                    */
/*                                                                           */
/*  Copyright (C) 2018 Free Software Foundation, Inc.                        */
/*                                                                           */
/*  This library is free software, licensed under the terms of the GNU       */
/*  General Public License as published by the Free Software Foundation,     */
/*  either version 3 of the License, or (at your option) any later version.  */
/*  You should have received a copy of the GNU General Public License        */
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.    */
/*****************************************************************************/

/*
 * in_dxf.h: read Ascii DXF to dwg
 * written by Reini Urban
 */

#ifndef IN_DXF_H
#define IN_DXF_H

#include "dwg.h"
#include "bits.h"

int  dwg_read_dxf(Bit_Chain *dat, Dwg_Data* dwg);

#endif
