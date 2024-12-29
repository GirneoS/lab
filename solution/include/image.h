#ifndef IMAGE_TRANSFORM_IMAGE_H
#define IMAGE_TRANSFORM_IMAGE_H

#include <stdint.h>

struct pixel { uint8_t b,g,r; };
struct image {
    int64_t width, height;
    struct pixel* data;
};

void none(struct image* init_pic, struct image* final_pic);
void cw_90(struct image* init_pic, struct image* final_pic);
void ccw_90(struct image* init_pic, struct image* final_pic);
void flip_v(struct image* init_pic, struct image* final_pic);
void flip_h(struct image* init_pic, struct image* final_pic);

#endif //IMAGE_TRANSFORM_IMAGE_H
