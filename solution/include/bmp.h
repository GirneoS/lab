#ifndef IMAGE_TRANSFORM_BMP_H
#define IMAGE_TRANSFORM_BMP_H

#include <image.h>
#include <read_status.h>
#include <write_status.h>

#include <stdint.h>
#include <stdio.h>

struct __attribute__((packed))
bmp_header {
    uint16_t bfType;
    uint32_t bfileSize;
    uint32_t bfReserved;
    uint32_t bOffBits;
    uint32_t biSize;
    uint32_t biWidth;
    uint32_t biHeight;
    uint16_t biPlanes;
    uint16_t biBitCount;
    uint32_t biCompression;
    uint32_t biSizeImage;
    uint32_t biXPelsPerMeter;
    uint32_t biYPelsPerMeter;
    uint32_t biClrUsed;
    uint32_t biClrImportant;
};

enum read_status from_bmp(FILE* in, struct image* img);
enum write_status to_bmp(FILE* file, struct image* img);

#endif //IMAGE_TRANSFORM_BMP_H
