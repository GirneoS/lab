#include <io.h>
#include <stdio.h>

#include "bmp.h"

enum read_status read_img(char* path, struct image* img){
    FILE * file = fopen(path, "rb");
    if(file == NULL)
        return READ_OPEN_FAIL;

    enum read_status result = from_bmp(file, img);
    fclose(file);

    return result;
}

enum write_status write_img(char* path, struct image* img){
    FILE* file = fopen(path, "wb");
    if(file == NULL)
        return WRITE_OPEN_FAIL;

    enum write_status result = to_bmp(file, img);
    fclose(file);

    return result;
}

