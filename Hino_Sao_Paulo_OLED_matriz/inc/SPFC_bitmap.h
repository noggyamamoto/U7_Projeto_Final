// Bitmap da imagem
const uint8_t spfc_bitmap[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xf8, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xf8, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x38, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x38, 0x00, 0xdc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0xdc, 0x03, 0x00, 0x00, 0x00, 
0x00, 0x38, 0x00, 0x9c, 0x07, 0x00, 0x00, 0x00, 0x00, 0x38, 0x46, 0x9c, 0x0f, 0x00, 0x00, 0x00, 
0x00, 0x38, 0xcf, 0x1c, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x38, 0xcf, 0x1c, 0x1e, 0x00, 0x00, 0x00, 
0x00, 0x38, 0xc9, 0x1c, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x38, 0xc9, 0x1c, 0x3c, 0x00, 0x00, 0x00, 
0x00, 0x38, 0xc9, 0x1c, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x38, 0xc9, 0x1c, 0x78, 0x00, 0x00, 0x00, 
0x00, 0x38, 0xc9, 0x1c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x38, 0xc9, 0x1c, 0xf0, 0x01, 0x00, 0x00, 
0x00, 0x38, 0xc9, 0x1c, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x38, 0xf9, 0x1c, 0xe0, 0x03, 0x00, 0x00, 
0x00, 0x38, 0xf9, 0x1c, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x38, 0x71, 0x1c, 0x80, 0x07, 0x00, 0x00, 
0x00, 0x38, 0x00, 0x1c, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x38, 0x00, 0x1c, 0x00, 0x0f, 0x00, 0x00, 
0x00, 0x38, 0x00, 0x1c, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x38, 0x00, 0x1c, 0x00, 0x1e, 0x00, 0x00, 
0x00, 0x38, 0x00, 0x1c, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x38, 0x00, 0x1c, 0x00, 0x7c, 0x00, 0x00, 
0x00, 0x38, 0xfe, 0x1c, 0x00, 0x78, 0x00, 0x00, 0x00, 0x38, 0xff, 0x1c, 0x00, 0xf0, 0x00, 0x00, 
0x00, 0x38, 0xff, 0x1c, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x38, 0x33, 0x1c, 0x00, 0xe0, 0x01, 0x00, 
0x00, 0x38, 0x33, 0x1c, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x38, 0x33, 0x1c, 0x00, 0xc0, 0x03, 0x00, 
0x00, 0x38, 0x33, 0x1c, 0x00, 0x80, 0x07, 0x00, 0x00, 0x38, 0x33, 0x1c, 0x00, 0x80, 0x0f, 0x00, 
0x00, 0x38, 0x33, 0x1c, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x38, 0x33, 0x1c, 0x00, 0x00, 0x1f, 0x00, 
0x00, 0x38, 0x33, 0x1c, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x38, 0x3f, 0x1c, 0x00, 0x00, 0x3c, 0x00, 
0x00, 0x38, 0x1e, 0xfc, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x38, 0x00, 0xfc, 0xff, 0xff, 0x7f, 0x00, 
0x00, 0x38, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x00, 0x00, 0x38, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x01, 
0x00, 0x38, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x01, 0x00, 0x38, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x00, 
0x00, 0x38, 0x00, 0xfc, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x38, 0xfe, 0xfc, 0xff, 0xff, 0x7f, 0x00, 
0x00, 0x38, 0xff, 0x1c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x38, 0xff, 0x1c, 0x00, 0x00, 0x1e, 0x00, 
0x00, 0x38, 0x33, 0x1c, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x38, 0x33, 0x1c, 0x00, 0x00, 0x0f, 0x00, 
0x00, 0x38, 0x33, 0x1c, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x38, 0x33, 0x1c, 0x00, 0x80, 0x07, 0x00, 
0x00, 0x38, 0x33, 0x1c, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x38, 0x33, 0x1c, 0x00, 0xc0, 0x03, 0x00, 
0x00, 0x38, 0x33, 0x1c, 0x00, 0xe0, 0x01, 0x00, 0x00, 0x38, 0x13, 0x1c, 0x00, 0xf0, 0x01, 0x00, 
0x00, 0x38, 0x03, 0x1c, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x38, 0x03, 0x1c, 0x00, 0x78, 0x00, 0x00, 
0x00, 0x38, 0x01, 0x1c, 0x00, 0x78, 0x00, 0x00, 0x00, 0x38, 0x00, 0x1c, 0x00, 0x3c, 0x00, 0x00, 
0x00, 0x38, 0x00, 0x1c, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x38, 0x00, 0x1c, 0x00, 0x1e, 0x00, 0x00, 
0x00, 0x38, 0x00, 0x1c, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x38, 0x00, 0x1c, 0x00, 0x0f, 0x00, 0x00, 
0x00, 0x38, 0x7e, 0x1c, 0x80, 0x07, 0x00, 0x00, 0x00, 0x38, 0xff, 0x1c, 0xc0, 0x03, 0x00, 0x00, 
0x00, 0x38, 0xff, 0x1c, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x38, 0x81, 0x1c, 0xe0, 0x01, 0x00, 0x00, 
0x00, 0x38, 0x81, 0x1c, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x38, 0x81, 0x1c, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x38, 0x81, 0x1c, 0x78, 0x00, 0x00, 0x00, 0x00, 0x38, 0x81, 0x1c, 0x78, 0x00, 0x00, 0x00, 
0x00, 0x38, 0x81, 0x1c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x38, 0xc3, 0x1c, 0x3e, 0x00, 0x00, 0x00, 
0x00, 0x38, 0xc3, 0x1c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x38, 0xe7, 0x1c, 0x0f, 0x00, 0x00, 0x00, 
0x00, 0x38, 0x66, 0x1c, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x9c, 0x07, 0x00, 0x00, 0x00, 
0x00, 0x38, 0x00, 0xdc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0xdc, 0x03, 0x00, 0x00, 0x00, 
0x00, 0x38, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x00, 
0x00, 0xf8, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xf8, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xf8, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};