const int logo_size = 3077;
const char logo[3077] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 
	0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 
	0x00, 0x96, 0x08, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x53, 0x90, 0xf1, 
	0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 
	0xdb, 0xe1, 0x4f, 0xe0, 0x00, 0x00, 0x01, 0x02, 0x50, 0x4c, 0x54, 
	0x45, 0xff, 0xff, 0xff, 0xfa, 0xfa, 0xfa, 0xf9, 0xf9, 0xf9, 0xf4, 
	0xf4, 0xf5, 0xfe, 0xf2, 0xf2, 0xf3, 0xf4, 0xf4, 0xf2, 0xf2, 0xf2, 
	0xfd, 0xf0, 0xf1, 0xef, 0xef, 0xf0, 0xee, 0xee, 0xef, 0xe9, 0xea, 
	0xea, 0xe8, 0xe9, 0xea, 0xfd, 0xe3, 0xe4, 0xfc, 0xe2, 0xe3, 0xe4, 
	0xe4, 0xe4, 0xe3, 0xe4, 0xe5, 0xe3, 0xe3, 0xe4, 0xed, 0xe0, 0xe1, 
	0xde, 0xdf, 0xe0, 0xdd, 0xde, 0xdf, 0xfb, 0xd5, 0xd7, 0xfb, 0xd4, 
	0xd5, 0xd8, 0xd8, 0xda, 0xd8, 0xd9, 0xda, 0xd6, 0xd6, 0xd6, 0xd3, 
	0xd4, 0xd5, 0xd2, 0xd3, 0xd5, 0xfa, 0xc7, 0xc9, 0xfa, 0xc6, 0xc8, 
	0xcc, 0xce, 0xcf, 0xcd, 0xce, 0xd0, 0xc8, 0xc9, 0xcb, 0xc9, 0xc8, 
	0xc8, 0xc7, 0xc8, 0xca, 0xe5, 0xbe, 0xc0, 0xf9, 0xb9, 0xbb, 0xf9, 
	0xb8, 0xba, 0xc2, 0xc3, 0xc5, 0xc1, 0xc3, 0xc5, 0xbc, 0xbe, 0xc0, 
	0xbc, 0xbd, 0xc0, 0xbb, 0xba, 0xba, 0xf8, 0xaa, 0xad, 0xf7, 0xa9, 
	0xac, 0xb7, 0xb8, 0xbb, 0xb6, 0xb8, 0xba, 0xb1, 0xb2, 0xb5, 0xcf, 
	0xa9, 0xac, 0xf7, 0x9c, 0xa0, 0xf6, 0x9b, 0x9f, 0xac, 0xad, 0xb0, 
	0xad, 0xac, 0xac, 0xab, 0xad, 0xb0, 0xa6, 0xa8, 0xab, 0xf6, 0x8e, 
	0x92, 0xf5, 0x8d, 0x91, 0xaa, 0x9f, 0xa2, 0xef, 0x88, 0x8c, 0x9f, 
	0x9d, 0x9e, 0xf4, 0x80, 0x84, 0xf4, 0x7f, 0x83, 0x91, 0x8f, 0x90, 
	0xf3, 0x71, 0x76, 0xbb, 0x7c, 0x80, 0xf2, 0x63, 0x69, 0x84, 0x81, 
	0x82, 0xf1, 0x62, 0x68, 0xc4, 0x6a, 0x6f, 0xf1, 0x55, 0x5b, 0xe6, 
	0x58, 0x5d, 0xf0, 0x54, 0x5a, 0x76, 0x73, 0x74, 0xf0, 0x47, 0x4d, 
	0xef, 0x46, 0x4d, 0xe0, 0x44, 0x4b, 0x68, 0x65, 0x66, 0xee, 0x38, 
	0x3f, 0xde, 0x36, 0x3d, 0x5a, 0x57, 0x58, 0xed, 0x2a, 0x31, 0xed, 
	0x2a, 0x32, 0x4c, 0x49, 0x4a, 0xec, 0x1c, 0x24, 0x3f, 0x3b, 0x3c, 
	0x31, 0x2d, 0x2e, 0x23, 0x1f, 0x20, 0xcc, 0x33, 0x1f, 0x2e, 0x00, 
	0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12, 
	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 
	0x00, 0x1c, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 
	0x61, 0x72, 0x65, 0x00, 0x41, 0x64, 0x6f, 0x62, 0x65, 0x20, 0x46, 
	0x69, 0x72, 0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x43, 0x53, 
	0x34, 0x06, 0xb2, 0xd3, 0xa0, 0x00, 0x00, 0x0a, 0x71, 0x49, 0x44, 
	0x41, 0x54, 0x78, 0x9c, 0xed, 0x5c, 0x6b, 0x7b, 0xda, 0x38, 0x16, 
	0xa6, 0x1d, 0x02, 0x9d, 0x70, 0x69, 0x77, 0x02, 0x1d, 0x02, 0x64, 
	0x86, 0x6c, 0xd2, 0x96, 0x92, 0x49, 0x36, 0x34, 0x05, 0x76, 0x09, 
	0x78, 0x49, 0x96, 0x25, 0xb0, 0xf1, 0x72, 0x71, 0xe0, 0xff, 0xff, 
	0x95, 0xb5, 0x2e, 0xbe, 0x48, 0x3a, 0x47, 0x96, 0xb1, 0x69, 0xf7, 
	0x99, 0xa7, 0xef, 0x87, 0x16, 0x8c, 0x2c, 0xbd, 0x3e, 0x17, 0x9d, 
	0xa3, 0x23, 0x39, 0x99, 0xcc, 0x9f, 0x05, 0x8d, 0x4e, 0x7f, 0x3a, 
	0x75, 0x7c, 0xd8, 0x53, 0xab, 0xdf, 0x28, 0x7e, 0x17, 0x22, 0xf7, 
	0x21, 0x1a, 0x61, 0xd8, 0x56, 0xe7, 0xdb, 0x12, 0xba, 0xb0, 0xd6, 
	0x30, 0x13, 0x8e, 0xf9, 0xed, 0xb7, 0xe2, 0x53, 0x8c, 0x60, 0xc2, 
	0x30, 0xed, 0x7c, 0x03, 0x2a, 0x0d, 0x44, 0x3b, 0x2a, 0xd6, 0xfd, 
	0xec, 0xff, 0x0b, 0x95, 0x83, 0xd3, 0x29, 0xc6, 0xa2, 0x42, 0xe9, 
	0xdc, 0x1e, 0x88, 0x4a, 0xb6, 0x1f, 0x97, 0x0a, 0xc1, 0xbc, 0x72, 
	0x08, 0x2e, 0x0d, 0x1b, 0x19, 0xce, 0x9e, 0x31, 0x60, 0x74, 0xfa, 
	0xe9, 0x73, 0x81, 0xc4, 0xb2, 0xb0, 0xba, 0xcd, 0x7c, 0xa8, 0x4d, 
	0xf5, 0x72, 0x00, 0x51, 0x4a, 0x5b, 0x38, 0x59, 0xc5, 0x5a, 0x56, 
	0xd6, 0x55, 0x1e, 0x6c, 0xda, 0x1c, 0x29, 0x22, 0x5c, 0xa7, 0xea, 
	0xe6, 0x15, 0x79, 0x66, 0x99, 0x5d, 0xe9, 0x9a, 0x57, 0x47, 0x2b, 
	0xa9, 0xfd, 0x7d, 0x7a, 0x5c, 0x2e, 0x24, 0x2e, 0x56, 0x29, 0xea, 
	0x8e, 0xfc, 0x95, 0x24, 0x1e, 0x2b, 0x2d, 0x27, 0xef, 0xc4, 0xa5, 
	0x42, 0x21, 0xd1, 0x99, 0xa7, 0xc3, 0x46, 0xe4, 0x32, 0xab, 0x9a, 
	0xde, 0x97, 0xb7, 0xd2, 0x67, 0x23, 0x70, 0x59, 0x69, 0x6d, 0x45, 
	0xc6, 0x2a, 0x6d, 0x36, 0x02, 0x97, 0x99, 0x99, 0x86, 0x3c, 0x2c, 
	0x44, 0xfd, 0x4e, 0x93, 0x72, 0x11, 0xfc, 0x68, 0x10, 0xef, 0xde, 
	0xaa, 0x23, 0xc1, 0x4a, 0xc6, 0x25, 0x1b, 0xe2, 0x12, 0x4f, 0x45, 
	0x2e, 0xd4, 0x09, 0x30, 0x59, 0xa4, 0x9a, 0x87, 0xb8, 0x18, 0x5b, 
	0x2e, 0xc7, 0xa5, 0xc2, 0xc5, 0x71, 0x1a, 0x09, 0xb8, 0xdc, 0x27, 
	0xe0, 0x92, 0x81, 0x62, 0xd9, 0x7a, 0x7f, 0x23, 0x6e, 0x24, 0xe1, 
	0x32, 0x00, 0xb8, 0x24, 0x30, 0xe2, 0xac, 0x9d, 0x80, 0x4b, 0x49, 
	0x8e, 0x08, 0x09, 0xcd, 0x26, 0xa4, 0xa4, 0x4b, 0xac, 0x4d, 0xb5, 
	0x6b, 0xcd, 0xd8, 0xb0, 0x8b, 0xd9, 0xe0, 0x32, 0x14, 0x3a, 0x2d, 
	0x98, 0x8b, 0xb3, 0xde, 0x2f, 0x55, 0xaf, 0x04, 0x3d, 0x74, 0x11, 
	0x26, 0x96, 0x6c, 0x17, 0x8f, 0x5e, 0x28, 0x6f, 0x22, 0x5c, 0x1c, 
	0x67, 0xb2, 0x17, 0x99, 0x20, 0x6b, 0x78, 0x04, 0x7f, 0x97, 0x63, 
	0x21, 0x57, 0x28, 0x0b, 0x5d, 0x68, 0xaa, 0xb5, 0x9f, 0x47, 0x05, 
	0x53, 0xef, 0x0a, 0x4a, 0x5c, 0x2e, 0xb1, 0xc4, 0xcf, 0x71, 0x46, 
	0xa5, 0x12, 0xa6, 0x24, 0x82, 0x7d, 0x6c, 0x38, 0x18, 0x0c, 0x30, 
	0x98, 0x92, 0xe6, 0xc9, 0x23, 0x11, 0x3f, 0xd5, 0x0a, 0x04, 0x03, 
	0x28, 0xe9, 0x12, 0x71, 0x15, 0x33, 0xcc, 0x63, 0x93, 0x09, 0xe6, 
	0x5e, 0x35, 0x38, 0xc2, 0x53, 0x88, 0x39, 0xe2, 0x5a, 0x4d, 0x30, 
	0xdf, 0x8d, 0x94, 0xdf, 0x74, 0x06, 0x61, 0x84, 0xb8, 0x56, 0xe3, 
	0x0f, 0xa8, 0x5a, 0x6f, 0x62, 0x2e, 0x8e, 0x13, 0x6f, 0xae, 0xc9, 
	0xfa, 0xf7, 0x29, 0x69, 0x43, 0x52, 0x1d, 0x11, 0xe8, 0xf3, 0xf3, 
	0x6c, 0xe7, 0x7e, 0x1a, 0x06, 0x6e, 0x31, 0x50, 0x2c, 0x36, 0xc1, 
	0x62, 0xd0, 0x6c, 0x3e, 0x7a, 0x5f, 0xd6, 0xc2, 0x60, 0x93, 0xbe, 
	0x20, 0xa9, 0x0a, 0x3a, 0x69, 0xc8, 0xf9, 0x10, 0x16, 0x72, 0xb4, 
	0xb0, 0x2d, 0x1e, 0x28, 0xd0, 0x61, 0x42, 0xa2, 0x2a, 0xe2, 0x05, 
	0x97, 0xa6, 0x44, 0x26, 0xf6, 0xfc, 0xb2, 0x7a, 0xbc, 0x0a, 0x84, 
	0x3b, 0x42, 0x9b, 0x5d, 0xf8, 0x6d, 0x70, 0x93, 0xb4, 0x25, 0x2e, 
	0x57, 0xf1, 0x98, 0xcc, 0xba, 0x62, 0xb4, 0xc7, 0x75, 0x1c, 0x38, 
	0x98, 0x66, 0x66, 0x17, 0xb9, 0xe4, 0xf1, 0x96, 0x0a, 0x16, 0x23, 
	0x75, 0xe6, 0xce, 0xe3, 0xcd, 0xfd, 0x36, 0x78, 0x13, 0x49, 0x4b, 
	0x5d, 0x43, 0x22, 0x36, 0xb6, 0x10, 0xc7, 0xb5, 0xec, 0x37, 0x41, 
	0x4d, 0x66, 0x25, 0xf5, 0x65, 0x22, 0x98, 0xd5, 0x63, 0x17, 0x5f, 
	0xd0, 0xa0, 0xf3, 0x42, 0xa0, 0x26, 0xb4, 0x20, 0x25, 0x85, 0xa5, 
	0x68, 0xb7, 0x9e, 0x0d, 0xf4, 0x29, 0x21, 0x9a, 0xe6, 0x04, 0x45, 
	0x9c, 0x7b, 0xac, 0x89, 0x34, 0xe3, 0x3d, 0x62, 0xed, 0x28, 0x5c, 
	0x23, 0x81, 0x75, 0x13, 0x06, 0x76, 0x73, 0x10, 0xae, 0xd0, 0xfa, 
	0x58, 0xd3, 0xac, 0x27, 0x6a, 0x24, 0x66, 0x8b, 0xcd, 0x05, 0xd2, 
	0x41, 0xd0, 0xa2, 0x81, 0xb4, 0x70, 0xc4, 0x27, 0xc5, 0xb4, 0x64, 
	0x77, 0xcd, 0xd3, 0x75, 0x64, 0x16, 0x09, 0x85, 0xce, 0x22, 0x46, 
	0x46, 0xec, 0x08, 0xb1, 0x3e, 0x30, 0x11, 0xc4, 0x80, 0xf4, 0x11, 
	0xae, 0xfb, 0x21, 0x5c, 0x66, 0x62, 0x47, 0x88, 0x5f, 0x4a, 0xad, 
	0xf4, 0x40, 0xa4, 0x1b, 0xce, 0x70, 0xe6, 0x70, 0x13, 0x69, 0x18, 
	0x24, 0x2c, 0xc9, 0xb3, 0xb4, 0x16, 0x88, 0x3b, 0x85, 0x9b, 0x20, 
	0xbe, 0x2d, 0x45, 0x49, 0xb8, 0x11, 0x94, 0x0a, 0xc6, 0x25, 0x23, 
	0x64, 0x5b, 0x88, 0x3b, 0x89, 0x9e, 0x5d, 0xc2, 0xc8, 0xc4, 0xa9, 
	0x4e, 0xc0, 0x01, 0x41, 0x28, 0x15, 0x77, 0xc0, 0x26, 0x12, 0x19, 
	0x74, 0xc2, 0x8a, 0x55, 0x76, 0x01, 0x7b, 0x10, 0x0a, 0xc5, 0x88, 
	0x6f, 0x1b, 0x92, 0x91, 0x83, 0x86, 0x78, 0x97, 0x24, 0x37, 0xa8, 
	0x83, 0xb5, 0xd0, 0x22, 0x0b, 0x35, 0x31, 0x26, 0xe3, 0x60, 0xd3, 
	0x4c, 0xb5, 0x3b, 0x53, 0xbc, 0x00, 0xba, 0x7f, 0x22, 0x36, 0x81, 
	0x43, 0xa5, 0xa1, 0xcd, 0x80, 0x4b, 0xf1, 0xd2, 0x95, 0xb5, 0x32, 
	0xed, 0x44, 0xaa, 0x4c, 0xc0, 0xee, 0x24, 0xc5, 0x49, 0x94, 0x8c, 
	0xbc, 0xcc, 0xcb, 0x5f, 0x86, 0x4a, 0xf6, 0x06, 0xe2, 0x95, 0xf6, 
	0x16, 0xe0, 0x59, 0x5a, 0x92, 0x30, 0x9e, 0x40, 0x08, 0xc3, 0x0d, 
	0xc4, 0xf8, 0x23, 0xda, 0x0c, 0x44, 0x46, 0x34, 0x19, 0xcc, 0xb7, 
	0x17, 0x62, 0x23, 0x3c, 0x33, 0xf2, 0x02, 0x6a, 0xb5, 0xab, 0x06, 
	0x76, 0xd1, 0xa0, 0xa0, 0xbc, 0x75, 0x22, 0x91, 0xb9, 0x88, 0x7e, 
	0x62, 0xdd, 0x8a, 0x89, 0xe8, 0xc9, 0x35, 0x12, 0x50, 0x74, 0xd1, 
	0x7d, 0xc8, 0xc5, 0xac, 0x0a, 0xd0, 0xc6, 0x91, 0xe7, 0x56, 0xdc, 
	0x9d, 0x1c, 0x7b, 0x86, 0xe5, 0x06, 0x92, 0xaa, 0xa1, 0x94, 0x48, 
	0xd9, 0x8e, 0x82, 0x7b, 0x92, 0x52, 0xea, 0x7d, 0xd6, 0x4c, 0x92, 
	0xa7, 0x01, 0xc2, 0x93, 0x4d, 0x06, 0x33, 0x4e, 0x29, 0xd3, 0xdb, 
	0x67, 0x95, 0x2d, 0x0a, 0x17, 0x8a, 0x06, 0x13, 0x85, 0x0c, 0xec, 
	0xdb, 0x92, 0x8c, 0x35, 0x7a, 0xc2, 0x20, 0xf5, 0x00, 0x65, 0x10, 
	0x6a, 0xfd, 0x13, 0x09, 0x95, 0x52, 0xde, 0x84, 0x19, 0x06, 0x0e, 
	0x49, 0xd1, 0xd0, 0x92, 0x52, 0xdd, 0xc1, 0xbc, 0x35, 0xea, 0x2b, 
	0xe6, 0x82, 0x52, 0xcd, 0x75, 0x00, 0x6b, 0x00, 0xd2, 0x21, 0x24, 
	0x54, 0xca, 0x01, 0x39, 0xae, 0x68, 0xa4, 0x87, 0x51, 0xf6, 0x59, 
	0x80, 0x21, 0x32, 0x68, 0xa8, 0x94, 0x03, 0x72, 0x4c, 0xab, 0x91, 
	0x33, 0x52, 0x48, 0x4b, 0x50, 0xb9, 0x11, 0xe9, 0x4e, 0x4e, 0x9c, 
	0xf0, 0x3a, 0x02, 0xf4, 0x28, 0x72, 0x0e, 0x08, 0xf9, 0x2c, 0x54, 
	0xc5, 0x42, 0x32, 0x4f, 0xf9, 0xd9, 0xf2, 0x71, 0x14, 0x25, 0x47, 
	0x73, 0xc8, 0x97, 0xc0, 0x0c, 0x7a, 0x82, 0x74, 0x28, 0xe7, 0x2a, 
	0x55, 0xf3, 0x99, 0x4f, 0xb1, 0x06, 0x28, 0xb8, 0x81, 0x69, 0x22, 
	0xb6, 0xaa, 0x54, 0x1a, 0x1b, 0xd7, 0xd1, 0x16, 0xf2, 0x7a, 0x0a, 
	0x34, 0x38, 0xb0, 0x42, 0x8d, 0x84, 0x4a, 0x20, 0xf7, 0x37, 0xf4, 
	0x6f, 0x85, 0x0b, 0x1c, 0xf5, 0xc1, 0xc2, 0x27, 0xba, 0xc4, 0x55, 
	0x0b, 0xe4, 0x46, 0x6c, 0x54, 0x2e, 0xa0, 0x60, 0x90, 0x45, 0x17, 
	0xda, 0xad, 0x5c, 0xd6, 0x73, 0xbb, 0x8d, 0xb6, 0x1b, 0x4b, 0x5d, 
	0xf3, 0x82, 0xa6, 0x8f, 0xac, 0x2c, 0xd0, 0x3c, 0x0e, 0x20, 0x1f, 
	0xb9, 0x8f, 0x01, 0x64, 0xc5, 0x70, 0xd5, 0x0b, 0xd9, 0xd4, 0xc0, 
	0x8f, 0x30, 0x41, 0xdb, 0xd9, 0x03, 0x9d, 0x70, 0xa0, 0x23, 0x0a, 
	0x48, 0xcd, 0x16, 0xa9, 0x95, 0xa3, 0x15, 0x23, 0x78, 0x29, 0x82, 
	0x6f, 0x29, 0xd9, 0xe0, 0x0a, 0x13, 0x96, 0x25, 0xb6, 0x4e, 0xd7, 
	0x9c, 0xa8, 0xb2, 0xc1, 0xa2, 0x47, 0xc9, 0x82, 0x1e, 0x76, 0x01, 
	0x2f, 0x76, 0x91, 0xd2, 0x24, 0x56, 0xb7, 0x47, 0xdd, 0xc9, 0xc1, 
	0xf6, 0x05, 0x33, 0xf9, 0xab, 0x47, 0x91, 0xcf, 0x62, 0x84, 0x14, 
	0x01, 0xb0, 0x98, 0x76, 0x01, 0x37, 0xc7, 0x2b, 0x46, 0x04, 0xea, 
	0x3e, 0x8f, 0x87, 0xea, 0xd5, 0x80, 0x9d, 0xff, 0x1a, 0x0d, 0x9a, 
	0x68, 0xd5, 0x08, 0x9d, 0xb6, 0xd1, 0x3d, 0x77, 0x1d, 0x99, 0x58, 
	0x95, 0x06, 0x05, 0x68, 0x40, 0xc3, 0xf7, 0xe4, 0x90, 0x8a, 0x51, 
	0x72, 0x36, 0x78, 0x70, 0xc5, 0xb7, 0x7a, 0xb0, 0x50, 0x99, 0x94, 
	0x8d, 0x26, 0xd0, 0x63, 0x26, 0xa3, 0x75, 0x27, 0x0a, 0x64, 0xa7, 
	0x3d, 0x0a, 0x25, 0x4d, 0xd2, 0x81, 0x1f, 0xd3, 0x40, 0x2a, 0x46, 
	0x01, 0xf6, 0x3a, 0x8b, 0xa3, 0x4b, 0x39, 0x34, 0xdb, 0xb8, 0x3a, 
	0xdf, 0x66, 0x50, 0x83, 0x5f, 0x24, 0xb4, 0x5b, 0x1f, 0xba, 0xdd, 
	0xc1, 0x48, 0x32, 0xce, 0x0a, 0x3d, 0xa0, 0x01, 0x23, 0xaf, 0x2f, 
	0xf0, 0xe3, 0x26, 0xa3, 0xd9, 0x5c, 0x09, 0xe1, 0x31, 0x8e, 0x70, 
	0xa2, 0xf6, 0xe2, 0x75, 0x27, 0x7b, 0x8c, 0x4e, 0xfb, 0xae, 0x8c, 
	0xed, 0x38, 0x32, 0xb4, 0x6b, 0x77, 0xfe, 0x0d, 0x97, 0xd2, 0x70, 
	0x20, 0x54, 0xa8, 0x44, 0xf7, 0xa6, 0xdd, 0x50, 0x36, 0x3e, 0x7c, 
	0x6c, 0x23, 0xfb, 0x6c, 0x01, 0xaa, 0x26, 0x0f, 0xa6, 0x3d, 0x85, 
	0x10, 0xed, 0x4e, 0x3e, 0x56, 0x96, 0x66, 0x23, 0x25, 0xdf, 0x35, 
	0x5b, 0xcf, 0x68, 0x1f, 0x07, 0xa9, 0x18, 0x21, 0xf0, 0x37, 0xab, 
	0x25, 0x99, 0x74, 0x4d, 0x77, 0x9b, 0x23, 0x4e, 0x44, 0xc4, 0x22, 
	0x43, 0xb0, 0xb0, 0x06, 0x4d, 0x3f, 0x56, 0x57, 0x9b, 0xdd, 0x51, 
	0x9c, 0x6d, 0xef, 0x88, 0xe3, 0xdc, 0xfa, 0x50, 0x99, 0x36, 0x22, 
	0x0e, 0xae, 0xc4, 0x3e, 0xc9, 0x9f, 0x08, 0x7a, 0x2e, 0xe6, 0xee, 
	0x94, 0x06, 0xa2, 0x0e, 0xd1, 0xa0, 0xab, 0xca, 0x43, 0x20, 0xf2, 
	0xf4, 0x60, 0x8c, 0xd3, 0x05, 0x49, 0x61, 0x47, 0x9e, 0xf2, 0xfc, 
	0x86, 0xa2, 0x31, 0x38, 0x77, 0x15, 0x99, 0xd3, 0xa4, 0x04, 0xb3, 
	0x37, 0x11, 0xd0, 0x97, 0x40, 0x52, 0xc5, 0xd4, 0xf4, 0xd0, 0x55, 
	0xa3, 0x6f, 0x0c, 0x28, 0xe7, 0x98, 0x44, 0xdf, 0x76, 0x98, 0xd7, 
	0xc2, 0x80, 0x7a, 0x6d, 0xb4, 0x5d, 0x1e, 0x0c, 0xea, 0x2c, 0x99, 
	0xe4, 0x5c, 0x76, 0x42, 0x28, 0x87, 0xb5, 0x52, 0x7c, 0x27, 0x25, 
	0x3e, 0x24, 0x45, 0x7d, 0x47, 0x25, 0x11, 0x88, 0x8a, 0xfa, 0x8e, 
	0x4a, 0x22, 0x10, 0x14, 0xf5, 0x5d, 0x95, 0x44, 0x10, 0x52, 0x54, 
	0x4a, 0x2f, 0xea, 0x24, 0x41, 0xa0, 0xa8, 0x83, 0xbc, 0x8a, 0x17, 
	0x0f, 0xbe, 0xa2, 0x0e, 0xf0, 0x22, 0x5e, 0x7c, 0x70, 0x45, 0xc5, 
	0x3f, 0xff, 0x9c, 0x0e, 0x7e, 0x3a, 0xe6, 0x38, 0xa5, 0xf8, 0x0f, 
	0x25, 0xf3, 0x37, 0xfa, 0xd9, 0xfb, 0xe5, 0xa7, 0xc3, 0x8d, 0xfe, 
	0x86, 0x8e, 0xfb, 0xe1, 0xd3, 0xa7, 0x4f, 0x5f, 0x7a, 0xbd, 0xeb, 
	0xb6, 0x8b, 0x3a, 0xc7, 0x49, 0xa1, 0x50, 0xf8, 0x0b, 0x59, 0xc5, 
	0xfe, 0xc3, 0xfd, 0x70, 0xe2, 0x5d, 0x25, 0x2d, 0xae, 0x7b, 0xbd, 
	0x2f, 0xee, 0x0d, 0x1f, 0x28, 0xc3, 0x37, 0xa9, 0xb0, 0x78, 0xeb, 
	0x52, 0x70, 0x09, 0xf4, 0x7a, 0xed, 0x8f, 0xf5, 0x7a, 0xa1, 0xf0, 
	0xb3, 0x7b, 0xed, 0x88, 0x8d, 0x7a, 0xd6, 0xe6, 0xe8, 0xf5, 0xfe, 
	0xe9, 0x38, 0xff, 0x75, 0x5b, 0x70, 0x9c, 0x31, 0x8e, 0x47, 0x6e, 
	0xd3, 0x9f, 0x0b, 0x85, 0x7a, 0xfd, 0x63, 0x9b, 0xdc, 0xff, 0xc5, 
	0xa5, 0xf5, 0x36, 0x01, 0xa7, 0xe3, 0x0f, 0x94, 0x46, 0xaf, 0x77, 
	0x7e, 0x72, 0x44, 0x2f, 0xbc, 0x3e, 0x39, 0x6b, 0xdf, 0x90, 0x0b, 
	0x5f, 0x5d, 0xc9, 0xbc, 0xa3, 0xe3, 0xbd, 0x2e, 0x10, 0xfc, 0xdb, 
	0xf9, 0x2b, 0xf9, 0xef, 0x35, 0x65, 0xfa, 0xce, 0x95, 0xcc, 0x57, 
	0xd2, 0xea, 0xa6, 0x7d, 0x76, 0xf2, 0x9a, 0xde, 0x78, 0x74, 0x72, 
	0xce, 0x7a, 0xfa, 0xf2, 0xe1, 0x78, 0x4f, 0x2e, 0x3d, 0x8e, 0x13, 
	0xef, 0xca, 0x57, 0x7e, 0xa1, 0xed, 0x5d, 0xa8, 0xf3, 0x0b, 0x7f, 
	0xff, 0x17, 0xff, 0x50, 0xf7, 0x7e, 0x69, 0xf3, 0x0b, 0x5f, 0xbd, 
	0x0b, 0x27, 0x5e, 0x6f, 0x7b, 0xb2, 0xf9, 0xe5, 0x0f, 0xde, 0xe1, 
	0x59, 0x81, 0x5d, 0x38, 0x7a, 0xff, 0x91, 0x0a, 0xa6, 0x77, 0x7d, 
	0xee, 0x0a, 0x86, 0xa8, 0x8c, 0x08, 0xc6, 0x33, 0x14, 0x26, 0x1a, 
	0x57, 0x35, 0xef, 0xea, 0xe7, 0xd7, 0xb4, 0xd9, 0xcd, 0xc7, 0xf7, 
	0x4c, 0xa4, 0x99, 0xc2, 0x19, 0x7f, 0x90, 0x3f, 0x7e, 0xd9, 0x8f, 
	0x8b, 0x8b, 0x57, 0xc7, 0xa7, 0xbf, 0x33, 0x93, 0xb9, 0x6e, 0x93, 
	0xd1, 0x48, 0xd7, 0x47, 0x74, 0xf8, 0x73, 0x6e, 0x2e, 0x37, 0xed, 
	0x10, 0x6e, 0xb8, 0xe1, 0x9c, 0xd7, 0x85, 0xc6, 0xed, 0x6b, 0x66, 
	0x34, 0xbf, 0x9f, 0x1e, 0xbf, 0xda, 0x9b, 0x8a, 0x8f, 0x37, 0xc7, 
	0x6f, 0x4f, 0x4f, 0x7f, 0x63, 0xbe, 0x74, 0xc3, 0x07, 0xab, 0xd7, 
	0xdf, 0x17, 0x40, 0xbc, 0xa7, 0x3f, 0x9e, 0x33, 0x6e, 0xc4, 0x9f, 
	0x7e, 0x3b, 0x3d, 0x7d, 0x9b, 0x8e, 0x3b, 0xa9, 0x78, 0xc5, 0x26, 
	0x92, 0x5f, 0x4f, 0x51, 0xfc, 0xca, 0x5a, 0xa4, 0x20, 0x85, 0x1f, 
	0xf8, 0x81, 0x1f, 0xf8, 0x13, 0xa2, 0xdc, 0x1a, 0x8f, 0x87, 0xad, 
	0x5c, 0xfa, 0x1d, 0x17, 0xd1, 0x3f, 0xbd, 0x92, 0xed, 0x80, 0xe9, 
	0x6a, 0x6e, 0xfc, 0xb2, 0x63, 0xd8, 0xdc, 0xb5, 0xdc, 0x7f, 0xc7, 
	0x66, 0xe3, 0xe4, 0x72, 0x41, 0xcd, 0x6b, 0x1a, 0xce, 0x89, 0x83, 
	0xcb, 0x0d, 0x37, 0x37, 0xa5, 0x6f, 0x73, 0x02, 0x0b, 0xd0, 0x29, 
	0x58, 0x37, 0x1a, 0x6e, 0x77, 0x01, 0x5e, 0x8c, 0xc9, 0xb4, 0x5e, 
	0x5a, 0xd1, 0x64, 0x1a, 0x7c, 0x51, 0x05, 0x90, 0x71, 0xa0, 0x8a, 
	0xda, 0xd3, 0x4e, 0x86, 0x11, 0x99, 0xf1, 0x6e, 0xe7, 0x92, 0xe9, 
	0xd0, 0xbf, 0xd0, 0x33, 0x9f, 0xba, 0x2b, 0xa7, 0xfb, 0x29, 0xad, 
	0xaa, 0xac, 0xa7, 0x53, 0x72, 0x79, 0x4e, 0x3f, 0x55, 0x88, 0x64, 
	0xc8, 0x42, 0x66, 0x4a, 0x7f, 0xe4, 0x2f, 0x59, 0xd9, 0x94, 0x8c, 
	0x05, 0xec, 0xae, 0x3c, 0x78, 0x1a, 0x1a, 0x8f, 0x9f, 0xcd, 0xc9, 
	0x94, 0x37, 0x3b, 0x4a, 0x26, 0x43, 0x25, 0xc2, 0x17, 0x71, 0x56, 
	0x28, 0x3f, 0xef, 0xf0, 0x73, 0x78, 0xd9, 0x06, 0x5f, 0x54, 0xf5, 
	0x1d, 0xbf, 0xce, 0xd9, 0x67, 0xd2, 0x52, 0xff, 0xb2, 0x50, 0x8b, 
	0x53, 0x29, 0x93, 0x2f, 0xb9, 0x07, 0x53, 0x32, 0xe3, 0x9d, 0x4f, 
	0xe6, 0xd6, 0x27, 0xc0, 0xea, 0x4d, 0x45, 0x8f, 0x98, 0x58, 0xa4, 
	0x52, 0xc9, 0xa8, 0x58, 0x32, 0x2e, 0x9e, 0x1f, 0xdd, 0x69, 0xc8, 
	0xd4, 0x42, 0xde, 0x16, 0x22, 0x53, 0xf1, 0x08, 0xb8, 0x1f, 0xec, 
	0xb5, 0xc7, 0x61, 0x2d, 0x1f, 0x77, 0x30, 0x20, 0x53, 0x63, 0x82, 
	0x29, 0x0b, 0xe4, 0x5c, 0x32, 0xb5, 0x25, 0xc5, 0x43, 0xa6, 0xfc, 
	0xb4, 0x25, 0xdf, 0xcb, 0x4f, 0xcc, 0xe1, 0x36, 0x43, 0x7a, 0xd7, 
	0x92, 0x7e, 0xdb, 0x2c, 0x97, 0x5c, 0x20, 0x94, 0x80, 0x2b, 0xa2, 
	0x7b, 0x8b, 0xef, 0x68, 0x56, 0xa8, 0xb8, 0x2a, 0xd4, 0x44, 0x2a, 
	0x32, 0x99, 0x46, 0xbf, 0x5f, 0xa4, 0xef, 0x05, 0x4a, 0x05, 0xbe, 
	0x21, 0x1d, 0xe2, 0x39, 0xc4, 0x6e, 0x3c, 0x1e, 0xb7, 0x7c, 0xed, 
	0x2d, 0x6b, 0x5b, 0x4a, 0xee, 0x2e, 0xb0, 0x6e, 0x22, 0xc4, 0x96, 
	0xff, 0x8d, 0xdc, 0x62, 0x71, 0xf3, 0x98, 0xb8, 0x16, 0xd9, 0xe1, 
	0xe7, 0x47, 0xfb, 0xd4, 0x90, 0x1a, 0xa1, 0x12, 0x45, 0x88, 0x0c, 
	0xc1, 0x14, 0x58, 0x8b, 0x32, 0x9b, 0x1d, 0x2a, 0x12, 0xf3, 0xc8, 
	0x50, 0x09, 0x8c, 0x3f, 0x87, 0x7d, 0xed, 0x49, 0x26, 0x73, 0xc1, 
	0x09, 0x90, 0xd1, 0xb2, 0x7c, 0xe9, 0x3d, 0xa7, 0x1c, 0x64, 0x32, 
	0x0d, 0x8a, 0x22, 0x46, 0x86, 0x99, 0x4c, 0x4b, 0x55, 0xdf, 0x72, 
	0x19, 0xcc, 0x3e, 0xe3, 0xa1, 0xfb, 0x65, 0xf3, 0x39, 0x53, 0xa3, 
	0xd4, 0xb7, 0xb2, 0x9a, 0xb2, 0x6c, 0xc0, 0x0b, 0x2a, 0xa0, 0x39, 
	0x1d, 0x22, 0xeb, 0x1f, 0xb0, 0x15, 0xc8, 0x08, 0x6b, 0xf3, 0xbe, 
	0x9e, 0xcc, 0xc3, 0xd2, 0x43, 0xcd, 0xff, 0xc9, 0x95, 0xce, 0x33, 
	0xf9, 0xb9, 0x4c, 0x8c, 0x37, 0xf7, 0xe2, 0x49, 0x63, 0x1c, 0x7e, 
	0x06, 0xe6, 0xdc, 0xf7, 0x74, 0x46, 0xed, 0x53, 0x63, 0xe9, 0xf8, 
	0x07, 0x6c, 0xe3, 0x93, 0xb9, 0x0b, 0x7f, 0xf1, 0x86, 0x11, 0xfd, 
	0xac, 0x3c, 0x74, 0x83, 0x57, 0x6d, 0xe9, 0xfd, 0x28, 0x90, 0xb9, 
	0xa5, 0x87, 0x73, 0xe6, 0xd4, 0x7f, 0x88, 0x66, 0xb2, 0xc4, 0x8c, 
	0x6e, 0x01, 0x32, 0xac, 0x02, 0xdb, 0xc0, 0xc8, 0xb0, 0x89, 0xe5, 
	0x41, 0x26, 0xe3, 0x4b, 0x66, 0xcb, 0xb8, 0xe4, 0x9e, 0x77, 0x3b, 
	0x81, 0xa9, 0x40, 0x86, 0x1c, 0x7a, 0x29, 0x16, 0xf9, 0x71, 0xa1, 
	0x35, 0x99, 0x58, 0x03, 0xc7, 0xc6, 0x0c, 0x18, 0x22, 0xc3, 0xdc, 
	0xe4, 0x45, 0x26, 0xe3, 0x7f, 0x63, 0x34, 0x73, 0x9b, 0x9d, 0x8e, 
	0x0c, 0x71, 0xee, 0xdb, 0x0e, 0x77, 0x6a, 0xd7, 0xa7, 0xac, 0x4a, 
	0x70, 0x8e, 0x29, 0x0e, 0x99, 0x32, 0x37, 0x51, 0x91, 0xdc, 0xb3, 
	0x4f, 0x86, 0x8d, 0x47, 0x87, 0x7e, 0x19, 0x3f, 0x61, 0x64, 0x5c, 
	0x73, 0x99, 0x4c, 0x78, 0xa8, 0x71, 0x49, 0xd9, 0xfd, 0xa0, 0xcc, 
	0x17, 0x87, 0x8c, 0x17, 0x26, 0xb9, 0xd5, 0xe4, 0xb6, 0xc1, 0xb7, 
	0x10, 0x99, 0x25, 0x57, 0x58, 0xf9, 0x05, 0x26, 0x43, 0x36, 0x65, 
	0xd6, 0x7c, 0x23, 0xbf, 0xc8, 0x3e, 0x7b, 0x31, 0x30, 0x16, 0x99, 
	0x32, 0xf7, 0xe0, 0x27, 0xd7, 0x4c, 0x72, 0x77, 0xec, 0xcb, 0xc6, 
	0x67, 0xc0, 0xc7, 0xf3, 0x54, 0x99, 0x13, 0xc9, 0xdc, 0xf9, 0xbd, 
	0x78, 0x69, 0x04, 0xc1, 0x9c, 0xa7, 0x11, 0x7b, 0x90, 0x09, 0x4f, 
	0xae, 0x1c, 0xdb, 0x5a, 0x30, 0xcf, 0xb0, 0xa9, 0x84, 0xf2, 0x1a, 
	0x66, 0x3e, 0x33, 0xd3, 0xd9, 0x2c, 0xef, 0x18, 0x99, 0xed, 0x72, 
	0xc7, 0x3b, 0xa1, 0xe7, 0x81, 0xb8, 0xff, 0xd0, 0xa3, 0x76, 0x93, 
	0xfd, 0xc8, 0x28, 0x6c, 0x5e, 0x88, 0x2b, 0x05, 0x73, 0xec, 0xce, 
	0x93, 0x43, 0x08, 0x63, 0x1e, 0x46, 0x76, 0x1e, 0x19, 0x5a, 0xde, 
	0xe3, 0x59, 0x64, 0x23, 0x20, 0xe6, 0xed, 0xde, 0x37, 0xfc, 0xe4, 
	0xca, 0x1f, 0x7e, 0xea, 0x84, 0xa5, 0x19, 0xa0, 0xb6, 0x0c, 0x0f, 
	0xf4, 0x40, 0x9d, 0x59, 0x24, 0x23, 0x27, 0x60, 0x63, 0x5f, 0xbb, 
	0xbc, 0x0b, 0x62, 0x28, 0xfe, 0x39, 0xc0, 0xb5, 0x9f, 0x47, 0xec, 
	0x41, 0xc6, 0xa5, 0xf3, 0xc0, 0x14, 0xb0, 0x5d, 0x0e, 0x73, 0x1e, 
	0x41, 0x1f, 0x4c, 0x7c, 0xa4, 0xc1, 0xe6, 0x8e, 0xcf, 0xd1, 0xae, 
	0xb1, 0xd4, 0xe8, 0x85, 0x07, 0xaf, 0x07, 0x3b, 0x74, 0xfe, 0x68, 
	0xe2, 0x13, 0xab, 0xf0, 0xd4, 0xae, 0x92, 0xf1, 0xde, 0xa4, 0xf7, 
	0xe3, 0x34, 0x7f, 0x9b, 0x9f, 0x39, 0xdd, 0xff, 0x00, 0x0b, 0xbe, 
	0x2d, 0xf9, 0xec, 0x5f, 0x30, 0xb6, 0x00, 0x00, 0x00, 0x00, 0x49, 
	0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82, 0x00
};

const int logo_length = 3077;