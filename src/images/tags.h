// -------------------------------------------------------------------------------- //
//    Copyright (C) 2008-2019 J.Rios anonbeat@gmail.com
//
//    This Program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 3, or (at your option)
//    any later version.
//
//    This Program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; see the file LICENSE.  If not, write to
//    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
//    Boston, MA 02110-1301 USA.
//
//    http://www.gnu.org/copyleft/gpl.html
//
// -------------------------------------------------------------------------------- //
const unsigned char guImage_tags[] = {
0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 
0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x18, 0x08, 0x06, 
0x00, 0x00, 0x00, 0xe0, 0x77, 0x3d, 0xf8, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 
0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4b, 
0x47, 0x44, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xa0, 0xbd, 0xa7, 0x93, 0x00, 
0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 
0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 
0x4d, 0x45, 0x07, 0xd9, 0x06, 0x05, 0x17, 0x34, 0x35, 0xb5, 0x8b, 0x60, 0xf4, 
0x00, 0x00, 0x01, 0xf8, 0x49, 0x44, 0x41, 0x54, 0x48, 0xc7, 0xe5, 0x95, 0xdf, 
0x6e, 0x12, 0x41, 0x14, 0x87, 0xbf, 0x99, 0x81, 0xa5, 0x14, 0x28, 0x5b, 0x71, 
0xa5, 0xba, 0x17, 0x50, 0x35, 0xbd, 0xa9, 0x26, 0x24, 0x06, 0xd3, 0xc4, 0x0b, 
0xf1, 0xce, 0x4b, 0xde, 0x40, 0x1e, 0x61, 0xdf, 0x40, 0x7c, 0x03, 0xde, 0xc0, 
0x7d, 0x84, 0x3e, 0x02, 0x37, 0x24, 0x26, 0xa4, 0x86, 0x98, 0x48, 0x8c, 0x89, 
0x4a, 0xd1, 0x96, 0xd8, 0x46, 0x04, 0xaa, 0xe5, 0x5f, 0x96, 0xf5, 0x82, 0x95, 
0xa4, 0xd1, 0x22, 0x1b, 0xf0, 0xc2, 0x78, 0x92, 0x49, 0x26, 0x39, 0x93, 0xdf, 
0x37, 0xbf, 0x33, 0x33, 0x67, 0xe0, 0x5f, 0x0f, 0xb1, 0xc8, 0xa2, 0xac, 0x65, 
0xa7, 0x80, 0x3c, 0x60, 0x57, 0x4b, 0x85, 0xae, 0x1f, 0x40, 0xe0, 0x0f, 0xc2, 
0x71, 0xc0, 0x52, 0x5a, 0xd8, 0x0a, 0x46, 0x75, 0x7d, 0xd0, 0x6e, 0xe9, 0xc0, 
0xb3, 0x95, 0x38, 0xc8, 0x5a, 0xf6, 0x53, 0x21, 0x95, 0x65, 0x98, 0x29, 0x7d, 
0x67, 0x2b, 0x86, 0xeb, 0x42, 0xe5, 0xe0, 0x55, 0x07, 0xd7, 0x4d, 0xfb, 0x71, 
0x21, 0x2f, 0x4b, 0x28, 0x2d, 0x5c, 0x7c, 0x70, 0xef, 0x8e, 0xbe, 0x6b, 0xc6, 
0x71, 0x5d, 0x68, 0x7f, 0x1f, 0xb1, 0xb6, 0xb9, 0xa5, 0x7b, 0xa5, 0x62, 0x69, 
0x80, 0x33, 0xea, 0x37, 0x00, 0x4e, 0x7a, 0x43, 0x4e, 0xcf, 0x86, 0x00, 0x98, 
0x89, 0x0d, 0x00, 0x6b, 0x25, 0x00, 0xa0, 0xf6, 0xa9, 0xdd, 0x67, 0xec, 0x4c, 
0x50, 0x52, 0x10, 0x54, 0x92, 0x58, 0x38, 0x48, 0x20, 0x14, 0xc9, 0x78, 0x87, 
0xbe, 0x3c, 0x40, 0x49, 0x31, 0x13, 0x97, 0xde, 0x5c, 0x37, 0x92, 0xf8, 0x29, 
0xd3, 0x3c, 0x40, 0xe7, 0x6c, 0x30, 0xbe, 0x20, 0x1e, 0x90, 0x82, 0xe4, 0xc6, 
0xda, 0xca, 0x00, 0x35, 0x80, 0x50, 0x50, 0xce, 0xc4, 0x95, 0x10, 0x24, 0xa2, 
0x1a, 0x4a, 0x0b, 0xe7, 0xbc, 0x2b, 0xbc, 0x14, 0x80, 0x4e, 0xb7, 0x8b, 0x12, 
0x53, 0xf1, 0x80, 0x14, 0x04, 0xd4, 0xd4, 0x49, 0x22, 0x79, 0x1d, 0xa0, 0xb0, 
0x12, 0x07, 0x5a, 0x40, 0x4e, 0x77, 0xef, 0x0d, 0x80, 0x6d, 0x23, 0x8a, 0x90, 
0xca, 0x5a, 0xc4, 0xc5, 0xa5, 0x80, 0x6a, 0xa9, 0xd0, 0x1d, 0x7f, 0xeb, 0x20, 
0x04, 0xb3, 0x9d, 0xff, 0x8c, 0x75, 0x4d, 0x61, 0x98, 0xa9, 0x34, 0x50, 0x5a, 
0xaa, 0x44, 0xee, 0xc4, 0x29, 0x0f, 0xc6, 0x13, 0xa4, 0xf8, 0xf5, 0xc1, 0xef, 
0x9a, 0x71, 0x22, 0xd7, 0x52, 0x85, 0xac, 0x65, 0x3f, 0x9f, 0xa7, 0xa1, 0xe6, 
0x25, 0xcd, 0xbd, 0xbc, 0xee, 0x86, 0x62, 0x8f, 0xaf, 0x46, 0x43, 0xbf, 0xcf, 
0x6f, 0x86, 0x39, 0x1d, 0x85, 0x32, 0xc6, 0xdd, 0x47, 0x69, 0x73, 0x2f, 0x5f, 
0x3e, 0x7e, 0xb1, 0x3f, 0xf4, 0xe5, 0x00, 0xd8, 0xff, 0x7c, 0x7c, 0x34, 0x77, 
0xc1, 0xfd, 0x9b, 0x57, 0xb8, 0x91, 0xbe, 0x5d, 0x00, 0x6c, 0xdf, 0x25, 0xaa, 
0x96, 0x0a, 0x87, 0xce, 0xa8, 0x5f, 0x7a, 0x7d, 0x74, 0xb1, 0xb7, 0x9d, 0x8f, 
0x1c, 0x5e, 0x1e, 0x7e, 0xa5, 0x52, 0x6f, 0x52, 0xa9, 0x37, 0x69, 0x35, 0x3f, 
0x00, 0x34, 0x7c, 0xb7, 0x6b, 0x2f, 0x8a, 0x27, 0x1f, 0xdf, 0xe7, 0xd6, 0xb5, 
0x9d, 0xcc, 0xb6, 0x11, 0x01, 0xe0, 0x4d, 0xab, 0x47, 0xb7, 0xd5, 0x28, 0x02, 
0x65, 0xa0, 0x36, 0xaf, 0xbb, 0x2e, 0xfa, 0xe1, 0xc4, 0x81, 0x72, 0xfa, 0xd6, 
0x14, 0x52, 0xa9, 0x37, 0x19, 0xf5, 0xbe, 0xe8, 0x8b, 0xb4, 0x6d, 0xb9, 0x08, 
0xc0, 0x13, 0xca, 0x35, 0xde, 0xbd, 0x2d, 0x57, 0xea, 0x4d, 0x9c, 0xc1, 0xf9, 
0xdf, 0xfb, 0x63, 0xb3, 0x96, 0xfd, 0x30, 0x6b, 0xd9, 0x4f, 0xf8, 0x6f, 0xe2, 
0x07, 0x9b, 0x35, 0x9e, 0xdd, 0xd0, 0xd7, 0xe9, 0x25, 0x00, 0x00, 0x00, 0x00, 
0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};
