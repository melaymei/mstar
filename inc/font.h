
BYTE code tOSDColorPalette0[] =
{
	0x5F, 0x5F, 0x5F, // Palette 0 8
	0x00, 0x00, 0x0F, // Palette 1 9
	0x0F, 0xFF, 0xFF, // Palette 2 10
	0xFF, 0xFF, 0x0F, // Palette 3 11
	0x0F, 0xF0, 0x3F, // Palette 4 12
	0xFF, 0xFF, 0xFF, // Palette 5 13
	0xFC, 0xF0, 0x0C, // Palette 6 14
	0xF0, 0x0F, 0x00, // Palette 7 15
};

/* OSD character table */
BYTE code tASCII2FONT[256] =
{
	/* 0 1 2 3 4 5 6 7 8 9 A B C D E F */
	/*00H*/ ' ', 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0xB3,
	//
	/*10H*/ 0x9F, 0xA0, 0x03, 0x04, 0x05, 0x06, 0x07, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xB4,
	//
	/*20H*/ 0x00, ' ', 0x00, ' ', ' ', ' ', ' ', 0x6E, 0x24, 0x25, ' ', 0x5B, ' ', 0x4E, 0x46, 0x49,
	// SPACE ' ( ) + - . / */
	/*30H*/ 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x4F, 0xA9, 0xAA, 0xAB, 0xAC, 0xB2,
	/* 0 1 2 3 4 5 6 7 8 9 : */
	/*40H*/ ' ', 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x20,
	/* A B C D E F G H I J K L M N O */
	/*50H*/ 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1,
	/* P Q R S T U V W X Y Z
	/*60H*/ 0x9E, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A,
	/* 16k a b c d e f g h i j k l m n o */
	/*70H*/ 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A,
	/* p q r s t u v w x y z */
	/*80H*/ 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A,
	/* 0 1 2 3 4 5 6 7 8 9 A B C D E F */
	/*90H*/ 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A,

	/*A0H*/ 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A,

	/*B0H*/ 0x7B, 0x7C, 0x7D, 0x7E, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A,

	/*C0H*/ 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A,

	/*D0H*/ 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA,

	/*E0H*/ 0xC8, 0xCA, 0xCC, 0xCE, 0xD0, 0xD2, 0xD4, 0xD6, 0xD8, 0xDA, 0xDC, 0xDE, 0xE0, 0xE2, 0xE4, 0xE6,
	/* 0 1 2 3 4 5 6 7 8 9 A B C D E F */
	/*F0H*/ 0xE8, 0xEA, 0xEC, 0xEE, 0xF0, 0xF2, 0xF4, 0xF6, 0xF8, 0xFA, 0xFC, 0xFE, 0xE2, 0xE3, ' ', 0xDE,
	/* 0 1 2 3 4 5 6 7 8 9 A B C D E F */
};

// Compressed mono font:
BYTE code tCompressMonoFontData[] =
{
	0xF0, 0x00, 0x50, 0x00, 0x90, 0x01, 0x70, 0x00, 0x98, 0x00, 0xB0, 0x00, 0x1D, 0xB6, 0xA0, 0x00,
	0x4C, 0x00, 0x1D, 0xB6, 0x4C, 0x00, 0x50, 0x00, 0x4D, 0x80, 0x1D, 0xB6, 0x4D, 0x80, 0x50, 0x00,
	0x4D, 0xB0, 0x1D, 0xB6, 0x4D, 0xB0, 0x50, 0x00, 0xBD, 0xB6, 0x50, 0x00, 0x00, 0xF0, 0x11, 0x98,
	0x53, 0x0C, 0x11, 0x98, 0x00, 0xF0, 0x50, 0x00, 0x00, 0x60, 0x01, 0xE0, 0x80, 0x60, 0x01, 0xF8,
	0x50, 0x00, 0x00, 0xF0, 0x01, 0x98, 0x13, 0x0C, 0x00, 0x18, 0x00, 0x30, 0x00, 0x60, 0x00, 0xC0,
	0x01, 0x8C, 0x03, 0x0C, 0x03, 0x18, 0x03, 0xF8, 0x50, 0x00, 0x00, 0xF0, 0x01, 0x98, 0x03, 0x0C,
	0x00, 0x0C, 0x00, 0x18, 0x00, 0xF0, 0x00, 0x18, 0x00, 0x0C, 0x13, 0x0C, 0x01, 0x98, 0x00, 0xF0,
	0x50, 0x00, 0x00, 0x38, 0x10, 0x78, 0x10, 0xD8, 0x11, 0x98, 0x03, 0x18, 0x03, 0xFE, 0x10, 0x18,
	0x00, 0x7E, 0x50, 0x00, 0x01, 0xFC, 0x21, 0x80, 0x01, 0xF0, 0x01, 0x98, 0x20, 0x0C, 0x03, 0x0C,
	0x01, 0x98, 0x00, 0xF0, 0x50, 0x00, 0x00, 0xF0, 0x01, 0x98, 0x03, 0x0C, 0x03, 0x00, 0x03, 0xF0,
	0x03, 0x98, 0x33, 0x0C, 0x01, 0x98, 0x00, 0xF0, 0x50, 0x00, 0x01, 0xFC, 0x01, 0x8C, 0x03, 0x0C,
	0x03, 0x18, 0x00, 0x18, 0x20, 0x30, 0x30, 0x60, 0x50, 0x00, 0x00, 0xF0, 0x01, 0x98, 0x13, 0x0C,
	0x01, 0x98, 0x00, 0xF0, 0x01, 0x98, 0x23, 0x0C, 0x01, 0x98, 0x00, 0xF0, 0x50, 0x00, 0x00, 0xF0,
	0x01, 0x98, 0x33, 0x0C, 0x01, 0x9C, 0x00, 0xFC, 0x00, 0x0C, 0x03, 0x0C, 0x01, 0x98, 0x00, 0xF0,
	0x60, 0x00, 0x10, 0x60, 0x20, 0xF0, 0x01, 0x98, 0x01, 0xF8, 0x01, 0x98, 0x13, 0x0C, 0x07, 0x9E,
	0x60, 0x00, 0x07, 0xF0, 0x33, 0x18, 0x03, 0xF8, 0x33, 0x0C, 0x07, 0xF8, 0x60, 0x00, 0x00, 0xFC,
	0x01, 0x8C, 0x03, 0x06, 0x43, 0x00, 0x03, 0x06, 0x01, 0x8C, 0x00, 0xF8, 0x60, 0x00, 0x07, 0xF0,
	0x03, 0x18, 0x63, 0x0C, 0x03, 0x18, 0x07, 0xF0, 0x60, 0x00, 0x07, 0xF8, 0x03, 0x18, 0x03, 0x0C,
	0x03, 0x00, 0x03, 0x30, 0x03, 0xF0, 0x03, 0x30, 0x03, 0x00, 0x03, 0x0C, 0x03, 0x18, 0x07, 0xF8,
	0x60, 0x00, 0x07, 0xF8, 0x03, 0x18, 0x03, 0x0C, 0x03, 0x00, 0x03, 0x30, 0x03, 0xF0, 0x03, 0x30,
	0x23, 0x00, 0x07, 0x80, 0x60, 0x00, 0x01, 0xFC, 0x03, 0x0C, 0x06, 0x06, 0x16, 0x00, 0x06, 0x3E,
	0x26, 0x0C, 0x03, 0x1C, 0x01, 0xFC, 0x60, 0x00, 0x07, 0x9E, 0x33, 0x0C, 0x03, 0xFC, 0x33, 0x0C,
	0x07, 0x9E, 0x60, 0x00, 0x00, 0xF0, 0x80, 0x60, 0x00, 0xF0, 0x60, 0x00, 0x00, 0x78, 0x70, 0x30,
	0x01, 0xB0, 0x00, 0xE0, 0x60, 0x00, 0x07, 0xBC, 0x03, 0x18, 0x03, 0x30, 0x03, 0x60, 0x13, 0xC0,
	0x03, 0x60, 0x03, 0x30, 0x03, 0x18, 0x03, 0x0C, 0x07, 0x9E, 0x60, 0x00, 0x07, 0x80, 0x63, 0x00,
	0x03, 0x0C, 0x03, 0x18, 0x07, 0xF8, 0x60, 0x00, 0x0E, 0x07, 0x06, 0x06, 0x27, 0x0E, 0x17, 0x9E,
	0x16, 0xF6, 0x06, 0x66, 0x0F, 0x6F, 0x60, 0x00, 0x07, 0x1E, 0x03, 0x0C, 0x03, 0x8C, 0x13, 0xCC,
	0x03, 0x6C, 0x13, 0x3C, 0x03, 0x1C, 0x03, 0x0C, 0x07, 0x8C, 0x60, 0x00, 0x01, 0xF0, 0x03, 0x18,
	0x66, 0x0C, 0x03, 0x18, 0x01, 0xF0, 0x60, 0x00, 0x03, 0xF8, 0x31, 0x8C, 0x01, 0xF8, 0x31, 0x80,
	0x03, 0xC0, 0x60, 0x00, 0x01, 0xF0, 0x03, 0x18, 0x56, 0x0C, 0x07, 0xEC, 0x03, 0x38, 0x01, 0xF6,
	0x00, 0x1C, 0x50, 0x00, 0x07, 0xF0, 0x03, 0x18, 0x13, 0x0C, 0x03, 0x18, 0x03, 0xF0, 0x03, 0x30,
	0x23, 0x18, 0x07, 0x9E, 0x60, 0x00, 0x01, 0xF8, 0x03, 0x18, 0x03, 0x0C, 0x03, 0x00, 0x01, 0xC0,
	0x00, 0x70, 0x00, 0x18, 0x00, 0x0C, 0x03, 0x0C, 0x01, 0x8C, 0x01, 0xF8, 0x60, 0x00, 0x03, 0xFC,
	0x03, 0x6C, 0x06, 0x66, 0x60, 0x60, 0x00, 0xF0, 0x60, 0x00, 0x07, 0x9E, 0x73, 0x0C, 0x01, 0x98,
	0x00, 0xF0, 0x60, 0x00, 0x07, 0x9E, 0x13, 0x0C, 0x21, 0x98, 0x20, 0xF0, 0x10, 0x60, 0x60, 0x00,
	0x0F, 0xFF, 0x26, 0x66, 0x23, 0xFC, 0x01, 0xFC, 0x21, 0x98, 0x60, 0x00, 0x07, 0xBC, 0x03, 0x18,
	0x11, 0xB0, 0x20, 0xE0, 0x11, 0xB0, 0x03, 0x18, 0x07, 0xBC, 0x60, 0x00, 0x07, 0x9E, 0x03, 0x0C,
	0x11, 0x98, 0x10, 0xF0, 0x30, 0x60, 0x00, 0xF0, 0x60, 0x00, 0x01, 0xFE, 0x01, 0x8C, 0x03, 0x18,
	0x00, 0x18, 0x00, 0x30, 0x00, 0x60, 0x10, 0xC0, 0x01, 0x86, 0x03, 0x0C, 0x03, 0xFC, 0x90, 0x00,
	0x01, 0xF0, 0x03, 0x18, 0x00, 0x18, 0x00, 0x78, 0x01, 0xD8, 0x03, 0x18, 0x03, 0x38, 0x01, 0xFC,
	0x50, 0x00, 0x07, 0x00, 0x23, 0x00, 0x03, 0xF0, 0x03, 0x98, 0x33, 0x0C, 0x03, 0x98, 0x03, 0xF0,
	0x90, 0x00, 0x00, 0xFC, 0x01, 0x9C, 0x03, 0x0C, 0x23, 0x00, 0x01, 0x8C, 0x00, 0xF8, 0x50, 0x00,
	0x00, 0x1C, 0x20, 0x0C, 0x00, 0xFC, 0x01, 0x9C, 0x33, 0x0C, 0x01, 0x9C, 0x00, 0xFE, 0x90, 0x00,
	0x00, 0xF0, 0x01, 0x98, 0x03, 0x0C, 0x03, 0xFC, 0x13, 0x00, 0x01, 0x8C, 0x00, 0xF8, 0x50, 0x00,
	0x00, 0x38, 0x00, 0x6C, 0x10, 0x60, 0x01, 0xFC, 0x50, 0x60, 0x00, 0xF0, 0x70, 0x00, 0x00, 0xFE,
	0x21, 0x98, 0x01, 0xF0, 0x03, 0x00, 0x01, 0xF8, 0x13, 0x0C, 0x01, 0xF8, 0x50, 0x00, 0x03, 0x80,
	0x21, 0x80, 0x01, 0xF8, 0x01, 0xCC, 0x41, 0x8C, 0x03, 0xDE, 0x50, 0x00, 0x10, 0x60, 0x10, 0x00,
	0x00, 0xE0, 0x50, 0x60, 0x00, 0xF0, 0x40, 0x00, 0x10, 0x30, 0x10, 0x00, 0x00, 0x70, 0x60, 0x30,
	0x01, 0xB0, 0x00, 0xE0, 0x40, 0x00, 0x03, 0x80, 0x21, 0x80, 0x01, 0xBC, 0x01, 0x98, 0x01, 0xB0,
	0x01, 0xE0, 0x01, 0xF0, 0x01, 0x98, 0x01, 0x8C, 0x03, 0xDE, 0x50, 0x00, 0x00, 0xE0, 0x90, 0x60,
	0x00, 0xF0, 0x90, 0x00, 0x0F, 0xFE, 0x0E, 0x63, 0x4C, 0x63, 0x0E, 0xF7, 0x90, 0x00, 0x07, 0xF0,
	0x03, 0x98, 0x43, 0x18, 0x07, 0xBC, 0x90, 0x00, 0x00, 0xF8, 0x01, 0x8C, 0x33, 0x06, 0x01, 0x8C,
	0x00, 0xF8, 0x70, 0x00, 0x03, 0xF8, 0x01, 0xCC, 0x31, 0x86, 0x01, 0xCC, 0x01, 0xF8, 0x01, 0x80,
	0x03, 0xC0, 0x70, 0x00, 0x01, 0xF8, 0x03, 0x38, 0x36, 0x18, 0x03, 0x38, 0x01, 0xF8, 0x00, 0x18,
	0x00, 0x3C, 0x90, 0x00, 0x01, 0xF8, 0x00, 0xEC, 0x40, 0xC0, 0x01, 0xE0, 0x90, 0x00, 0x01, 0xF8,
	0x03, 0x18, 0x03, 0x0C, 0x01, 0xE0, 0x00, 0x38, 0x03, 0x0C, 0x01, 0x8C, 0x01, 0xF8, 0x60, 0x00,
	0x20, 0xC0, 0x03, 0xF0, 0x40, 0xC0, 0x00, 0xD8, 0x00, 0x70, 0x90, 0x00, 0x03, 0x9C, 0x41, 0x8C,
	0x01, 0x9C, 0x00, 0xFE, 0x90, 0x00, 0x07, 0x9E, 0x03, 0x0C, 0x11, 0x98, 0x10, 0xF0, 0x10, 0x60,
	0x90, 0x00, 0x0F, 0xFF, 0x16, 0x66, 0x13, 0xFC, 0x21, 0x98, 0x90, 0x00, 0x07, 0xBC, 0x03, 0x18,
	0x01, 0xB0, 0x10, 0xE0, 0x01, 0xB0, 0x03, 0x18, 0x07, 0xBC, 0x70, 0x00, 0x07, 0x9E, 0x03, 0x0C,
	0x11, 0x98, 0x10, 0xF0, 0x10, 0x60, 0x07, 0xC0, 0x03, 0x80, 0x90, 0x00, 0x01, 0xF8, 0x01, 0x98,
	0x03, 0x30, 0x00, 0x60, 0x00, 0xC0, 0x01, 0x98, 0x03, 0x30, 0x03, 0xF0, 0xF0, 0x00, 0x00, 0x00,
	0x10, 0x60, 0x30, 0x00, 0x00, 0x10, 0x00, 0x30, 0x00, 0x50, 0x00, 0x90, 0x0F, 0x10, 0x09, 0x15,
	0x09, 0x12, 0x09, 0x15, 0x0F, 0x10, 0x00, 0x90, 0x00, 0x50, 0x00, 0x30, 0x00, 0x10, 0x40, 0x00,
	0x00, 0x10, 0x00, 0x30, 0x00, 0x54, 0x00, 0x92, 0x0F, 0x11, 0x29, 0x15, 0x0F, 0x11, 0x00, 0x92,
	0x00, 0x54, 0x00, 0x30, 0x00, 0x10, 0x30, 0x00, 0x00, 0x1F, 0x00, 0x3F, 0x03, 0xA0, 0x02, 0xC3,
	0x02, 0x83, 0x32, 0x80, 0x02, 0xE1, 0x02, 0xF0, 0x03, 0x9F, 0x00, 0x0F, 0x40, 0x00, 0x0C, 0x00,
	0x0E, 0x00, 0x01, 0x80, 0x0F, 0xF0, 0x0F, 0xF8, 0x00, 0x38, 0x0F, 0xF8, 0x0F, 0xF0, 0x02, 0x00,
	0x1C, 0x00, 0x08, 0x00, 0xC0, 0x00, 0x2F, 0xFC, 0xC0, 0x00, 0x00, 0x80, 0x01, 0x80, 0x03, 0xFF,
	0x07, 0xFF, 0x03, 0xFF, 0x01, 0x80, 0x00, 0x80, 0xA0, 0x00, 0x00, 0x10, 0x00, 0x18, 0x0F, 0xFC,
	0x0F, 0xFE, 0x0F, 0xFC, 0x00, 0x18, 0x00, 0x10, 0xC0, 0x00, 0x11, 0xF8, 0xD0, 0x00, 0x10, 0x60,
	0x10, 0x00, 0x10, 0x60, 0x70, 0x00, 0x10, 0xA0, 0x11, 0xB0, 0x01, 0xB8, 0x12, 0xB8, 0x02, 0xBC,
	0x04, 0xBC, 0x14, 0xBE, 0x08, 0xBF, 0x0F, 0xBF, 0x30, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x0F,
	0x00, 0x3F, 0x00, 0xFF, 0x01, 0xFF, 0x07, 0xFF, 0x0F, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0x06, 0x01,
	0x01, 0x01, 0x00, 0xC1, 0x00, 0x31, 0x00, 0x09, 0x00, 0x07, 0x00, 0x01, 0x20, 0x00, 0xB7, 0xFE,
	0xF0, 0x00, 0x40, 0x00, 0xFF, 0xFF, 0x1F, 0xFF, 0x0C, 0x63, 0x0C, 0xC3, 0x0D, 0x87, 0x0F, 0x0F,
	0x0C, 0x1B, 0x0C, 0x33, 0x0C, 0x63, 0x0C, 0xC7, 0x0D, 0x8F, 0x0F, 0x1B, 0x0E, 0x33, 0x0C, 0x63,
	0x0C, 0xC7, 0x0D, 0x8F, 0x0F, 0x1B, 0x0E, 0x33, 0x0C, 0x63, 0x0C, 0x43, 0x20, 0x00, 0x10, 0x60,
	0x10, 0xF0, 0x11, 0xF8, 0x13, 0xFC, 0x17, 0xFE, 0x1F, 0xFF, 0x50, 0x00, 0x1F, 0xFF, 0x17, 0xFE,
	0x13, 0xFC, 0x11, 0xF8, 0x10, 0xF0, 0x00, 0x60, 0x60, 0x00, 0x40, 0x60, 0x17, 0xFE, 0x40, 0x60,
	0x60, 0x00, 0x0F, 0xFF, 0x86, 0x0C, 0x0F, 0xBF, 0x60, 0x00, 0x07, 0xFF, 0x71, 0x8C, 0x0B, 0x0C,
	0x0E, 0x3F, 0x60, 0x00, 0x0D, 0xFB, 0x0E, 0x67, 0x13, 0x6C, 0x01, 0xF8, 0x00, 0xF0, 0x01, 0xF8,
	0x13, 0x6C, 0x06, 0x66, 0x0D, 0xFB, 0x60, 0x00, 0x0F, 0xBF, 0x06, 0x0C, 0x06, 0x1C, 0x06, 0x3C,
	0x06, 0x6C, 0x06, 0xCC, 0x07, 0x8C, 0x17, 0x0C, 0x06, 0x0C, 0x0F, 0xBF, 0x60, 0x00, 0x0F, 0xFC,
	0x03, 0x0C, 0x03, 0x06, 0x63, 0x00, 0x0F, 0xC0, 0x60, 0x00, 0x0F, 0xF8, 0x06, 0x18, 0x16, 0x0C,
	0x07, 0xF0, 0x06, 0x18, 0x26, 0x0C, 0x06, 0x18, 0x0F, 0xF0, 0x60, 0x00, 0x0F, 0x1F, 0x2C, 0x06,
	0x0F, 0xC6, 0x0C, 0x66, 0x2C, 0x36, 0x0C, 0x66, 0x0F, 0xDF, 0x60, 0x00, 0x01, 0xFF, 0x03, 0x0C,
	0x16, 0x0C, 0x03, 0x0C, 0x01, 0xFC, 0x01, 0x8C, 0x13, 0x0C, 0x06, 0x0C, 0x0E, 0x3F, 0x30, 0x00,
	0x01, 0xF8, 0x00, 0xF0, 0x00, 0x00, 0x0F, 0xDF, 0x03, 0x06, 0x03, 0x0E, 0x03, 0x1E, 0x03, 0x36,
	0x03, 0x66, 0x03, 0xC6, 0x13, 0x86, 0x03, 0x06, 0x0F, 0xDF, 0x50, 0x00, 0x01, 0xF8, 0x00, 0x60,
	0x01, 0xF8, 0x03, 0x6C, 0x36, 0x66, 0x03, 0x6C, 0x01, 0xF8, 0x00, 0x60, 0x01, 0xF8, 0x60, 0x00,
	0x03, 0xFF, 0x30, 0xC6, 0x21, 0x86, 0x03, 0x06, 0x0F, 0xFF, 0x0C, 0x03, 0x60, 0x00, 0x0F, 0xC0,
	0x23, 0x00, 0x03, 0xF8, 0x03, 0x0C, 0x23, 0x06, 0x03, 0x0C, 0x0F, 0xF8, 0x70, 0x00, 0x01, 0xF0,
	0x03, 0x18, 0x06, 0x0C, 0x00, 0x7C, 0x01, 0xCC, 0x03, 0x0C, 0x16, 0x0C, 0x03, 0x1C, 0x01, 0xFE,
	0x70, 0x00, 0x01, 0xF0, 0x03, 0x18, 0x16, 0x0C, 0x07, 0xFC, 0x16, 0x00, 0x06, 0x0C, 0x03, 0x18,
	0x01, 0xF0, 0x60, 0x00, 0x0F, 0xFE, 0x86, 0x18, 0x0F, 0xFE, 0x10, 0x06, 0x40, 0x00, 0x07, 0xBC,
	0x43, 0x18, 0x03, 0x38, 0x01, 0xF8, 0x10, 0x18, 0x00, 0x3C, 0x60, 0x00, 0x0E, 0x3C, 0x0C, 0x66,
	0x2C, 0xC3, 0x0F, 0xC3, 0x2C, 0xC3, 0x0C, 0x66, 0x0E, 0x3C, 0x50, 0x00, 0x08, 0x00, 0x0F, 0xFF,
	0x86, 0x66, 0x0F, 0xFF, 0x10, 0x03, 0x40, 0x00, 0x03, 0xF0, 0x03, 0x98, 0x03, 0x0C, 0x00, 0x0C,
	0x00, 0x18, 0x00, 0xF0, 0x00, 0x18, 0x00, 0x0C, 0x03, 0x0C, 0x03, 0x18, 0x01, 0xF0, 0x20, 0x00,
	0x00, 0x18, 0x00, 0x30, 0x00, 0x60, 0x00, 0x00, 0x07, 0x9E, 0x73, 0x0C, 0x01, 0x98, 0x00, 0xF0,
	0x20, 0x00, 0x00, 0x18, 0x00, 0x30, 0x00, 0x60, 0x00, 0x00, 0x00, 0xF0, 0x80, 0x60, 0x00, 0xF0,
	0x20, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x60, 0x00, 0x00, 0x07, 0x1E, 0x03, 0x0C, 0x03, 0x8C,
	0x13, 0xCC, 0x03, 0x6C, 0x13, 0x3C, 0x03, 0x1C, 0x03, 0x0C, 0x07, 0x8C, 0x60, 0x00, 0x00, 0xFC,
	0x01, 0x8C, 0x03, 0x06, 0x43, 0x00, 0x03, 0x06, 0x01, 0x8C, 0x00, 0xF8, 0x00, 0x30, 0x00, 0x60,
	0x10, 0x00, 0x00, 0xDC, 0x03, 0x70, 0x00, 0x00, 0x07, 0x1E, 0x03, 0x0C, 0x03, 0x8C, 0x13, 0xCC,
	0x03, 0x6C, 0x13, 0x3C, 0x03, 0x1C, 0x03, 0x0C, 0x07, 0x8C, 0x70, 0x00, 0x07, 0x9C, 0x03, 0x36,
	0x13, 0x60, 0x13, 0xC0, 0x03, 0x60, 0x03, 0x30, 0x03, 0x1B, 0x07, 0x8E, 0x60, 0x00, 0x07, 0x9E,
	0x03, 0x0C, 0x11, 0x98, 0x10, 0xF0, 0x10, 0x60, 0x00, 0xC0, 0x07, 0xC0, 0x03, 0x80, 0x20, 0x00,
	0x00, 0x18, 0x00, 0x30, 0x00, 0x60, 0x00, 0x00, 0x07, 0x1E, 0x03, 0x0C, 0x03, 0x8C, 0x13, 0xCC,
	0x03, 0x6C, 0x13, 0x3C, 0x03, 0x1C, 0x03, 0x0C, 0x07, 0x8C, 0x50, 0x00, 0x01, 0x80, 0x03, 0x00,
	0x16, 0x00, 0x5C, 0x00, 0x16, 0x00, 0x03, 0x00, 0x01, 0x80, 0x30, 0x00, 0x03, 0x00, 0x01, 0x80,
	0x10, 0xC0, 0x50, 0x60, 0x10, 0xC0, 0x01, 0x80, 0x03, 0x00, 0x10, 0x00, 0x00, 0xCC, 0x01, 0xB8,
	0x00, 0x00, 0x10, 0x60, 0x20, 0xF0, 0x01, 0x98, 0x01, 0xF8, 0x01, 0x98, 0x13, 0x0C, 0x07, 0x9E,
	0x30, 0x00, 0x01, 0x98, 0x10, 0x00, 0x10, 0x60, 0x20, 0xF0, 0x01, 0x98, 0x01, 0xF8, 0x01, 0x98,
	0x13, 0x0C, 0x07, 0x9E, 0x20, 0x00, 0x00, 0x18, 0x00, 0x30, 0x00, 0x60, 0x00, 0x00, 0x10, 0x60,
	0x20, 0xF0, 0x01, 0x98, 0x01, 0xF8, 0x01, 0x98, 0x13, 0x0C, 0x07, 0x9E, 0x20, 0x00, 0x01, 0x80,
	0x00, 0xC0, 0x00, 0x60, 0x00, 0x00, 0x10, 0x60, 0x20, 0xF0, 0x01, 0x98, 0x01, 0xF8, 0x01, 0x98,
	0x13, 0x0C, 0x07, 0x9E, 0x30, 0x00, 0x00, 0x60, 0x01, 0x98, 0x00, 0x00, 0x10, 0x60, 0x20, 0xF0,
	0x01, 0x98, 0x01, 0xF8, 0x01, 0x98, 0x13, 0x0C, 0x07, 0x9E, 0x20, 0x00, 0x00, 0x18, 0x00, 0x30,
	0x00, 0x60, 0x00, 0x00, 0x07, 0xF8, 0x03, 0x18, 0x03, 0x0C, 0x03, 0x00, 0x03, 0x30, 0x03, 0xF0,
	0x03, 0x30, 0x03, 0x00, 0x03, 0x0C, 0x03, 0x18, 0x07, 0xF8, 0x20, 0x00, 0x01, 0x80, 0x00, 0xC0,
	0x00, 0x60, 0x00, 0x00, 0x07, 0xF8, 0x03, 0x18, 0x03, 0x0C, 0x03, 0x00, 0x03, 0x30, 0x03, 0xF0,
	0x03, 0x30, 0x03, 0x00, 0x03, 0x0C, 0x03, 0x18, 0x07, 0xF8, 0x20, 0x00, 0x00, 0x18, 0x00, 0x30,
	0x00, 0x60, 0x00, 0x00, 0x01, 0xF0, 0x03, 0x18, 0x66, 0x0C, 0x03, 0x18, 0x01, 0xF0, 0x20, 0x00,
	// After compressed, size = 2000
};

/*
BYTE code tOSDFont1[] =
{
	// 4 0xC8(0) : PICTURE1
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0x78, 0xE0, 0x1F, 0x69, 0xF0, 0xEF, 0x5B, 0xF9, 0xF6, 0x69, 0xF4, 0xE2, 0x78, 0xE2, 0x00, 0x78, 0x60, 0x80, 0x78, 0x38, 0xC0, 0x78, 0x0B, 0xF0, 0x78, 0x13, 0xE0, 0x78, 0x15, 0xE2, 0x78, 0x19, 0xE6, 0x78, 0x11, 0xEE, 0x78, 0x91, 0x6E, 0x4B, 0xF7, 0x08, 0x4B, 0xFF, 0x00, 0x4B, 0xFF, 0x00,
	// 4 0xCA(0) : PICTURE2
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0x0F, 0xC1, 0x3E, 0x01, 0xC1, 0x3E, 0x03, 0x01, 0xFE, 0x00, 0x81, 0x7E, 0x00, 0x41, 0x3E, 0x0B, 0x21, 0x1E, 0x9E, 0x91, 0x0E, 0x9E, 0x51, 0x8E, 0x9E, 0x31, 0xCE, 0x9E, 0x11, 0xEE, 0x9E, 0x01, 0xFE, 0xAD, 0xB5, 0x4A, 0x0F, 0xFD, 0x02, 0x0F, 0xFD, 0x02,
	// 4 0xCC(0) : PICTURE3
	0x78, 0x01, 0xFE, 0x78, 0x01, 0xFE, 0x78, 0x00, 0xFF, 0x69, 0x43, 0xBC, 0x4B, 0xFF, 0x00, 0x4B, 0xFF, 0x00, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xCE(0) : PICTURE4
	0xDE, 0x01, 0xFE, 0x3F, 0xF9, 0x76, 0xF3, 0xE1, 0x7E, 0xF0, 0x01, 0xFE, 0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xD0(0) : AUDIO1
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0x78, 0x07, 0xFF, 0x78, 0x05, 0xFF, 0x78, 0x04, 0xFF, 0x78, 0x04, 0xFF, 0x78, 0x06, 0xFF, 0x78, 0x05, 0xFF, 0x78, 0x04, 0xFF, 0x69, 0xFF, 0x1C, 0x69, 0x3C, 0xFF, 0x69, 0x3C, 0xFF, 0x69, 0xFF, 0x18, 0x69, 0x00, 0xFF, 0x69, 0x00, 0xFF, 0x69, 0x00, 0xFF, 0x69, 0xFF, 0x00, 0x69, 0x00, 0xFF,
	// 4 0xD2(0) : AUDIO2
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0xF0, 0x01, 0xFE, 0xF8, 0x01, 0xFE, 0xFC, 0x01, 0xFE, 0xF6, 0x01, 0xFE, 0xF3, 0x01, 0xFE, 0xF1, 0x01, 0xFE, 0xF9, 0x01, 0xFE, 0x5F, 0xF9, 0x06, 0xF3, 0x01, 0xFE, 0xF1, 0x01, 0xFE, 0x1F, 0xF9, 0x06, 0xF1, 0x01, 0xFE, 0xF7, 0x01, 0xFE, 0xFF, 0x01, 0xFE, 0xFF, 0xF9, 0x06, 0xF6, 0x01, 0xFE,
	// 4 0xD4(0) : AUDIO3
	0x69, 0x00, 0xFF, 0x69, 0xFF, 0x00, 0x69, 0x00, 0xFF, 0x69, 0x00, 0xFF, 0x69, 0xFF, 0x00, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xD6(0) :AUDIO4
	0xF0, 0x01, 0xFE, 0x0F, 0xF9, 0x06, 0xF0, 0x01, 0xFE, 0xF0, 0xE1, 0xFE, 0x0F, 0xF9, 0xE6, 0xF0, 0xE1, 0xFE, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xD8(0) : FUCTION1
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x04, 0xF3, 0x78, 0x12, 0xE1, 0x78, 0x31, 0xD0, 0x78, 0x21, 0xC0, 0x78, 0x00, 0xE0, 0x78, 0x12, 0xE1, 0x78, 0x0C, 0xF3, 0x78, 0x00, 0xFF, 0x78, 0xE3, 0x5D, 0x78, 0xE7, 0x5A, 0x78, 0xFF, 0x65, 0x78, 0xFF, 0x7F, 0x78, 0xFF, 0x7E, 0x78, 0xFC, 0xF3,
	// 4 0xDA(0) : FUCTION2
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0xC3, 0x81, 0x7E, 0xF3, 0x81, 0xFE, 0x95, 0xC1, 0xBE, 0xB7, 0xC1, 0xBE, 0xF3, 0x81, 0xFE, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0xF0, 0x61, 0x9E, 0xF0, 0x71, 0x6E, 0xE1, 0x79, 0x76, 0x25, 0xF9, 0xF6, 0x2D, 0xF9, 0xF6, 0x34, 0xF1, 0x6E, 0x78, 0x61, 0x9E, 0xF0, 0x01, 0xFE, 0xE1, 0x01, 0xFE,
	// 4 0xDC(0) : FUCTION3
	0x78, 0xF0, 0xEF, 0x78, 0xE0, 0x5F, 0x78, 0x40, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xDE(0) : FUCTION4
	0xD3, 0xED, 0x12, 0xE3, 0xFD, 0xEA, 0xD3, 0xFD, 0x3A, 0xF0, 0xFF, 0x7C, 0xF0, 0x7D, 0x9E, 0xF0, 0x1D, 0xEE, 0xF0, 0x1D, 0xE2, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xE0(0) : SYSTEM1
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x18, 0xE7, 0x5B, 0x80, 0x00, 0x5B, 0x80, 0x00, 0x5B, 0xE7, 0x00, 0x4B, 0x24, 0xC3, 0x78, 0x24, 0xC3, 0x78, 0x24, 0xC3, 0x78, 0x24, 0xC3, 0x78, 0x24, 0xC3, 0x78, 0x7C, 0x83, 0x78, 0x7C, 0x83, 0x78, 0x64, 0x83, 0x78, 0x7C, 0x83, 0x78, 0x7C, 0x83,
	// 4 0xE2(0) : SYSTEM2
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0xE1, 0xE1, 0x1E, 0xE1, 0x21, 0x1E, 0xE1, 0x21, 0x1E, 0x3C, 0xC1, 0x3E, 0xB4, 0xC1, 0x3E, 0xB4, 0xC1, 0x3E, 0xF0, 0xC1, 0x3E, 0xF0, 0xC1, 0x3E, 0xF0, 0xC1, 0x3E, 0xE1, 0xE1, 0x1E, 0xF1, 0xF1, 0xEE, 0xF1, 0xF1, 0x6E, 0xF1, 0xF1, 0x6E, 0xF1, 0xF1, 0x6E,
	// 4 0xE4(0) : SYSTEM3
	0x78, 0x7C, 0x9B, 0x78, 0x7C, 0x9B, 0x78, 0x7C, 0x83, 0x78, 0x7C, 0x83, 0x78, 0x7C, 0x9B, 0x78, 0x3C, 0xDB, 0x78, 0x18, 0xE7, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xE6(0) : SYSTEM4
	0xF1, 0xF1, 0x6E, 0xF1, 0xF1, 0x6E, 0xF1, 0xF1, 0x6E, 0xF1, 0xF1, 0x6E, 0xF1, 0xF1, 0x6E, 0xF1, 0xF1, 0xEE, 0xF0, 0xE1, 0x1E, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xE8(0) : PRESET1
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0x78, 0x70, 0x8F, 0x78, 0x98, 0x17, 0x78, 0xBE, 0x39, 0x78, 0xFF, 0x7E, 0x78, 0xFF, 0x3F, 0x78, 0xFF, 0x7F, 0x78, 0xFF, 0x7F, 0x78, 0xFF, 0x5F, 0x78, 0x7F, 0xAF, 0x78, 0x7F, 0xB6, 0x78, 0x3F, 0xF0, 0x78, 0x3F, 0xF9, 0x78, 0x3F, 0xFD, 0x78, 0x3F, 0xFE, 0x78, 0x3F, 0xDF, 0x78, 0x7F, 0x9F,
	// 4 0xEA(0) : PRESET2
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0xF0, 0x61, 0x9E, 0x78, 0xA1, 0x1E, 0xAD, 0xC1, 0x3E, 0xCF, 0x01, 0xFE, 0x8F, 0x01, 0xFE, 0x3F, 0x01, 0xFE, 0x7F, 0x01, 0xFE, 0xFF, 0x81, 0xFE, 0xFF, 0xC1, 0xFE, 0xFF, 0xC1, 0xFE, 0xFF, 0xE1, 0xFE, 0x7F, 0xE1, 0xFE, 0xBF, 0xF1, 0xEE,
	// 4 0xEC(0) : PRESET3
	0x78, 0xFF, 0x6F, 0x78, 0xFF, 0x77, 0x78, 0x7F, 0xB9, 0x78, 0x3F, 0xFC, 0x78, 0x3E, 0xDF, 0x78, 0x1F, 0xEF, 0x78, 0x1F, 0xFF, 0x78, 0x3F, 0xC0, 0x78, 0x00, 0xFF, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xEE(0) : PRESET4
	0xDF, 0xF9, 0xF6, 0xEF, 0xF1, 0xFE, 0xEF, 0xF9, 0xFE, 0x7F, 0xF1, 0x3E, 0x87, 0xF9, 0x06, 0xF0, 0x01, 0xFE, 0xFC, 0x01, 0xFE, 0x1E, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xF0(0) : CLOCK1
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0x78, 0x00, 0xFF, 0x69, 0xFF, 0x00, 0x5B, 0xFF, 0xFF, 0x5B, 0x80, 0x80, 0x5B, 0x80, 0x08, 0x5B, 0x80, 0x00, 0x5B, 0x80, 0x00, 0x5B, 0x80, 0x20, 0x5B, 0x80, 0x00, 0x5B, 0x80, 0x00, 0x5B, 0x80, 0x40, 0x5B, 0x81, 0x00, 0x5B, 0x82, 0x00, 0x5B, 0x82, 0x20, 0x5B, 0x84, 0x00, 0x5B, 0x88, 0x00,
	// 4 0xF2(0) : CLOCK2
	0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x00, 0xF0, 0x01, 0xFE, 0x0F, 0xF9, 0x06, 0xFF, 0xFD, 0xF2, 0x80, 0x1D, 0x02, 0x08, 0x1D, 0x82, 0x08, 0x1D, 0x02, 0x08, 0x1D, 0x02, 0x08, 0x1D, 0x22, 0x08, 0x1D, 0x02, 0x08, 0x1D, 0x02, 0x0F, 0xCD, 0x12, 0x00, 0x1D, 0x02, 0x00, 0x1D, 0x02, 0x00, 0x1D, 0x22, 0x00, 0x1D, 0x02, 0x00, 0x1D, 0x02,
	// 4 0xF4(0) : CLOCK3
	0x5B, 0xF7, 0x7F, 0x5B, 0xFF, 0x7F, 0x5B, 0xFF, 0x80, 0x5B, 0xFF, 0xFF, 0x69, 0xFF, 0x00, 0x78, 0xC0, 0xFF, 0x78, 0xC0, 0xFF, 0x78, 0x00, 0xFF, 0x78, 0x00, 0xFF, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	// 4 0xF6(0) : CLOCK4
	0xFF, 0x7D, 0xE2, 0xF7, 0xFD, 0xE2, 0x0F, 0xFD, 0x12, 0xFF, 0xFD, 0xF2, 0x0F, 0xF9, 0x06, 0xF0, 0x31, 0xFE, 0xF0, 0x31, 0xFE, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xFE, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
*/