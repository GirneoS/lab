#include "image.h"
#include <io.h>
#include <string.h>
#include <utils.h>
#include <write_status.h>

int main( int argc, char** argv ) {
    if(argc < 4)
        return 1;

    char* init_img_path = argv[1];
    char* final_img_path = argv[2];
    char* transformation = argv[3];

    struct image init_img = {0};
    enum read_status read = read_img(init_img_path, &init_img);
    if(read == READ_INVALID_BITS || read == READ_INVALID_SIGNATURE || read == READ_INVALID_HEADER)
        return 12;
    else if(read == READ_OPEN_FAIL)
        return 2;

    struct image final_img = {0};
    if (strcmp(transformation, "none") == 0)
        none(&init_img, &final_img);
    else if (strcmp(transformation, "fliph") == 0)
        flip_h(&init_img, &final_img);
    else if(strcmp(transformation, "flipv") == 0)
        flip_v(&init_img, &final_img);
    else if (strcmp(transformation, "cw90") == 0)
        cw_90(&init_img, &final_img);
    else if(strcmp(transformation, "ccw90") == 0)
        ccw_90(&init_img, &final_img);
    free_img_data(&init_img);

    enum write_status write = write_img(final_img_path, &final_img);
    if(write != WRITE_OK) {
        free_img_data(&final_img);
        if(write == WRITE_ERROR)
            return 3;
        if(write == WRITE_OPEN_FAIL)
            return 4;
    }

    free_img_data(&final_img);
    return 0;
}
