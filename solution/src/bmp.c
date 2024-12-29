#include <bmp.h>
#include <stdlib.h>

#include "read_status.h"
#include "write_status.h"

enum read_status from_bmp(FILE* in, struct image* img){
    struct bmp_header headers;

    if(fread(&headers, sizeof(struct bmp_header), 1, in) != 1 || headers.bfileSize <= 54)
        return READ_INVALID_HEADER;
    if (headers.biBitCount != 24 || headers.biPlanes != 1)
        return READ_INVALID_BITS;
    if (headers.bfType != 0x4D42)
        return READ_INVALID_SIGNATURE;

    img->data = malloc(img->height * img->width * sizeof(struct pixel));
    img->height = headers.biHeight;
    img->width = headers.biWidth;

    uint32_t padding_size = (4 - (img->width * 3) % 4) % 4;

    for (size_t i = 0; i < img->height; i++) {
        fread(img->data + i * img->width, sizeof(struct pixel), img->width, in);
        fseek(in, padding_size, SEEK_CUR);
    }

    return READ_OK;
}

//формирует заголовки и вызывает функцию записывания
enum write_status to_bmp(FILE* file, struct image* img){
    struct bmp_header header = {0};
    enum write_status result = WRITE_OK;
    header.bfType = 0x4D42;
    header.bOffBits = 54;
    header.biSize = 40;
    header.biHeight = img->height;
    header.biWidth = img->width;
    header.biPlanes = 1;
    header.biBitCount = 24;

    size_t padding_size = (4 - (header.biWidth * 3) % 4) % 4; // вычисляем количество байтов для выравнивания
    uint8_t  padding_byte = 0;

    header.biSizeImage = (header.biWidth * sizeof(struct pixel) + padding_size) * header.biHeight;
    header.bfileSize = 54 + header.biSizeImage;

    if(fwrite(&header, 54, 1, file) != 1)
        result = WRITE_ERROR;

    for (size_t i = 0; i < img->height; i++) {
        if (fwrite(img->data + i * img->width, sizeof(struct pixel), img->width, file) != img->width)
            return WRITE_ERROR;

        for (size_t j = 0; j < padding_size; j++) {
            if (fwrite(&padding_byte, 1, 1, file) != 1)
                return WRITE_ERROR;
        }
    }

    return result;
}

