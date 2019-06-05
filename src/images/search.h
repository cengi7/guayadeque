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
const unsigned char guImage_search[] = {
0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 
0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x18, 0x08, 0x06, 
0x00, 0x00, 0x00, 0xe0, 0x77, 0x3d, 0xf8, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4b, 
0x47, 0x44, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xa0, 0xbd, 0xa7, 0x93, 0x00, 
0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 
0x00, 0x48, 0x00, 0x46, 0xc9, 0x6b, 0x3e, 0x00, 0x00, 0x03, 0x97, 0x49, 0x44, 
0x41, 0x54, 0x48, 0xc7, 0xed, 0x95, 0x5d, 0x4c, 0x5b, 0x65, 0x18, 0xc7, 0x7f, 
0xe7, 0xb4, 0xb4, 0x3d, 0xb0, 0x51, 0x2a, 0x0c, 0xb7, 0x21, 0x83, 0x32, 0x3e, 
0xd6, 0x30, 0x11, 0x27, 0xc2, 0x58, 0x20, 0xc0, 0x02, 0x5b, 0x5c, 0x9c, 0x9b, 
0xf3, 0xc2, 0x98, 0x18, 0x4d, 0xe6, 0x47, 0x62, 0x74, 0x99, 0x73, 0x89, 0xf1, 
0x66, 0xd7, 0xde, 0xf9, 0x11, 0x13, 0x77, 0x69, 0xbc, 0xd9, 0x95, 0x31, 0x7a, 
0xeb, 0x27, 0x8c, 0xe8, 0x90, 0x11, 0x64, 0xb4, 0x2c, 0x93, 0xcc, 0xa8, 0x50, 
0x59, 0x0b, 0x2b, 0x2d, 0xf6, 0xf4, 0xeb, 0xed, 0x39, 0xe7, 0xf5, 0x82, 0x52, 
0x28, 0x74, 0xc3, 0x78, 0xbd, 0xff, 0xd5, 0xc9, 0xf3, 0xfc, 0xff, 0xef, 0xff, 
0x79, 0x9e, 0xf7, 0x79, 0x73, 0xe0, 0x01, 0xb6, 0x81, 0x72, 0xaf, 0x44, 0x47, 
0x77, 0xcf, 0xb7, 0x22, 0x2b, 0x06, 0x01, 0x54, 0x45, 0xfd, 0x6e, 0xea, 0xfa, 
0xd8, 0x50, 0x41, 0xfe, 0x48, 0xcf, 0xb0, 0x10, 0xa2, 0x0f, 0x40, 0x55, 0xd5, 
0x91, 0xa9, 0xf1, 0xb1, 0xfe, 0x62, 0xe7, 0xa8, 0x45, 0x62, 0x36, 0xc0, 0x21, 
0xb2, 0x62, 0xf0, 0xd9, 0xa7, 0x8f, 0xe1, 0x6b, 0xaa, 0xc3, 0x92, 0xd6, 0x60, 
0x2e, 0x9e, 0xe7, 0x08, 0x21, 0xfa, 0xf2, 0x79, 0xcb, 0xea, 0x03, 0x1c, 0x9b, 
0x38, 0x45, 0x3b, 0xb0, 0x03, 0x25, 0x2d, 0x6d, 0x6d, 0xdd, 0x9a, 0xa6, 0x7d, 
0x6f, 0x99, 0x32, 0x4f, 0xb2, 0xe0, 0x1d, 0xff, 0xc4, 0xf8, 0x27, 0x00, 0x8f, 
0x77, 0x1e, 0x7e, 0x55, 0xc2, 0x65, 0xcb, 0xb2, 0xc8, 0x75, 0x40, 0x32, 0x95, 
0x38, 0x31, 0xeb, 0xf7, 0x0f, 0x03, 0x59, 0xc0, 0x28, 0x66, 0x60, 0x03, 0x1c, 
0xd5, 0xd5, 0xd5, 0xe5, 0xf5, 0x4d, 0x2d, 0xd7, 0x5e, 0x78, 0xfe, 0x8c, 0x57, 
0x9a, 0x06, 0x7a, 0x22, 0x49, 0x64, 0x79, 0x99, 0x1f, 0xaf, 0x5e, 0x2b, 0xa8, 
0xe4, 0xb5, 0xb3, 0x2f, 0xd1, 0xf1, 0x44, 0x3b, 0xa9, 0x74, 0x9a, 0x40, 0xe0, 
0x26, 0x9f, 0x7d, 0x7e, 0x65, 0x3e, 0xf8, 0xc7, 0xef, 0x9d, 0x4b, 0x4b, 0x4b, 
0x2b, 0x80, 0x00, 0xcc, 0xb5, 0x8a, 0x01, 0x38, 0xd4, 0x75, 0xe4, 0x15, 0x53, 
0x5a, 0x1f, 0xab, 0x8a, 0xe2, 0xe8, 0xed, 0x39, 0x2c, 0x3c, 0x15, 0x6e, 0x46, 
0x46, 0x86, 0xd1, 0xf5, 0x04, 0x77, 0xa3, 0x3a, 0xc7, 0x87, 0x06, 0x38, 0x73, 
0xfa, 0x24, 0x7e, 0x7f, 0x80, 0x91, 0xd1, 0x9f, 0xf8, 0xe2, 0xcb, 0xaf, 0xa9, 
0xad, 0xdd, 0x4d, 0x3c, 0x1e, 0x67, 0xe7, 0x8e, 0x32, 0x7c, 0x07, 0x1a, 0xab, 
0x25, 0x04, 0xf7, 0xd6, 0x79, 0x0d, 0x89, 0xf2, 0xde, 0xf4, 0xc4, 0x2f, 0x1f, 
0x6d, 0x34, 0x50, 0xa5, 0xb4, 0x3e, 0x7c, 0xf7, 0xc2, 0x5b, 0x2e, 0xaf, 0xb7, 
0x8e, 0xd8, 0x4a, 0xcc, 0x75, 0xe3, 0xc6, 0x34, 0x52, 0xae, 0x8e, 0x28, 0xb2, 
0x1c, 0xc5, 0xd7, 0xdc, 0x48, 0x34, 0xb6, 0xcc, 0x7c, 0x70, 0x8e, 0x87, 0xab, 
0x2a, 0xf1, 0xcf, 0xfc, 0x96, 0xef, 0xe6, 0x4e, 0x28, 0x44, 0x43, 0xfd, 0x3e, 
0x67, 0x5d, 0x6d, 0x0d, 0xe9, 0x4c, 0xc6, 0xf6, 0xc3, 0xe8, 0xd8, 0xfb, 0xad, 
0xad, 0xad, 0x9f, 0xce, 0xcc, 0xcc, 0x88, 0x35, 0x03, 0xc5, 0xb4, 0xac, 0xd2, 
0xb2, 0xb2, 0x52, 0xc2, 0x8b, 0x21, 0x74, 0x5d, 0x47, 0x08, 0x51, 0x30, 0x92, 
0x4c, 0x26, 0x03, 0x80, 0x94, 0x92, 0x64, 0x2a, 0x59, 0x90, 0xcb, 0x66, 0x05, 
0xc1, 0xe0, 0x3c, 0x89, 0x44, 0x92, 0x9a, 0x9a, 0x47, 0x50, 0x51, 0x54, 0xd3, 
0x34, 0x77, 0x02, 0x91, 0x82, 0x2d, 0x32, 0x4d, 0x83, 0x62, 0x28, 0xd5, 0x34, 
0x7e, 0x9d, 0x0e, 0x60, 0xb7, 0x97, 0xe0, 0x74, 0x3a, 0xf9, 0x2b, 0xb8, 0x40, 
0xcd, 0x9e, 0xdd, 0x45, 0xb9, 0x46, 0x36, 0x0b, 0x80, 0x65, 0x59, 0xca, 0xc6, 
0x11, 0xc9, 0x55, 0x03, 0x13, 0xd5, 0x66, 0xdf, 0x22, 0xf2, 0x35, 0x7b, 0x19, 
0x1b, 0x9f, 0x64, 0x6c, 0x7c, 0x32, 0x1f, 0x7b, 0xe3, 0xf5, 0x97, 0x8b, 0x1b, 
0x18, 0x06, 0x52, 0x4a, 0x54, 0x55, 0x95, 0x05, 0x06, 0x8a, 0xa2, 0x88, 0x64, 
0x32, 0xe9, 0xa8, 0xdb, 0xb5, 0x0f, 0xbb, 0xbd, 0x84, 0xaa, 0x4a, 0x1d, 0x3d, 
0xae, 0xe3, 0x72, 0xe9, 0x88, 0xd5, 0xf1, 0x88, 0x9b, 0x53, 0x93, 0x47, 0x0d, 
0xc3, 0x30, 0x1e, 0x7b, 0xb2, 0xeb, 0xaa, 0xe6, 0x74, 0x3a, 0xdc, 0xe5, 0x6e, 
0x6c, 0x36, 0xfb, 0x16, 0xae, 0x25, 0x2d, 0xd2, 0xe9, 0x74, 0xa2, 0x60, 0x4d, 
0x7d, 0x8f, 0xb6, 0xff, 0xec, 0xd4, 0x5c, 0xdd, 0x6b, 0xbb, 0xbd, 0xb9, 0xb0, 
0x74, 0x3a, 0x75, 0x79, 0x36, 0xe0, 0xbf, 0x04, 0x70, 0xe0, 0x60, 0xdb, 0x25, 
0xa7, 0xa6, 0x9d, 0x97, 0x52, 0xda, 0x8b, 0x91, 0x45, 0x46, 0x5c, 0xbf, 0xe5, 
0x9f, 0xea, 0x02, 0xd6, 0x09, 0xaa, 0xca, 0xfe, 0xa1, 0xfe, 0x5e, 0xfe, 0x89, 
0xc7, 0x58, 0x0c, 0x2d, 0x12, 0x89, 0x46, 0x99, 0x0b, 0x2e, 0xc4, 0xfe, 0xbc, 
0x7d, 0xfb, 0x58, 0x6e, 0xa7, 0x17, 0x81, 0x34, 0xc0, 0xad, 0xc0, 0xf4, 0x07, 
0xc0, 0x15, 0xc0, 0xd6, 0xd0, 0xdc, 0xf2, 0xcd, 0x73, 0xa7, 0x9f, 0xa9, 0xd8, 
0xa8, 0x0b, 0xa7, 0x53, 0xf5, 0x6b, 0x63, 0xb7, 0x01, 0xb4, 0x1d, 0xea, 0xec, 
0xad, 0xa9, 0xdd, 0x7b, 0xf6, 0xed, 0xf3, 0x6f, 0x96, 0x88, 0x6c, 0x06, 0x90, 
0x78, 0x3c, 0x1e, 0x56, 0xe2, 0x09, 0xcb, 0xed, 0xae, 0xfc, 0xea, 0xee, 0x62, 
0x68, 0x12, 0xd0, 0x59, 0x7d, 0xa5, 0x26, 0x90, 0x01, 0x22, 0xbe, 0x83, 0xed, 
0xcd, 0xde, 0xc6, 0x86, 0x17, 0x2f, 0x6c, 0xd2, 0x45, 0x62, 0x2b, 0x54, 0xed, 
0xda, 0x33, 0x1a, 0xbe, 0xf3, 0xf7, 0x9c, 0x0a, 0x60, 0x73, 0xda, 0x2f, 0x0e, 
0x0e, 0xf4, 0xbb, 0x92, 0xa9, 0xc4, 0xfa, 0x2a, 0x26, 0x93, 0x54, 0x3e, 0xe4, 
0x71, 0x39, 0x34, 0xc7, 0xb9, 0xdc, 0x81, 0x22, 0x57, 0x95, 0xcc, 0x7d, 0x67, 
0x5c, 0x3b, 0xb4, 0x73, 0x43, 0x03, 0xfd, 0xce, 0x2d, 0x3a, 0x4f, 0x85, 0xa6, 
0xda, 0x95, 0x8b, 0xf9, 0x4b, 0x36, 0xb3, 0xc6, 0xa9, 0x13, 0x4f, 0x1d, 0x47, 
0x51, 0xa0, 0x71, 0x7f, 0x13, 0x36, 0xc5, 0xce, 0xdc, 0xfc, 0x3c, 0xa5, 0x65, 
0x65, 0xea, 0x42, 0x68, 0xe9, 0x24, 0x50, 0xec, 0x62, 0x2c, 0xd3, 0x30, 0x4f, 
0xde, 0x47, 0x77, 0x6a, 0xe3, 0x16, 0x11, 0x0e, 0x87, 0x70, 0xbb, 0xcb, 0x89, 
0xc7, 0xe3, 0x44, 0xa3, 0xcb, 0x84, 0xc3, 0xab, 0x0f, 0x6e, 0x3b, 0x6c, 0xa7, 
0x53, 0x00, 0xda, 0x3a, 0x3a, 0xe5, 0xfd, 0x0e, 0x99, 0x9e, 0x18, 0x2f, 0xfa, 
0xdf, 0xf8, 0x2f, 0xba, 0x35, 0x61, 0xf3, 0x36, 0x85, 0xce, 0xde, 0x23, 0xfe, 
0x7f, 0x75, 0x0f, 0xb0, 0x8e, 0x7f, 0x01, 0xb6, 0x41, 0xbe, 0x00, 0x4b, 0x21, 
0xf5, 0x26, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 
0x82
};
