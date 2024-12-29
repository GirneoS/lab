#include <stdlib.h>

#include "image.h"

void none(struct image* init_pic, struct image* final_pic){
    final_pic->height = init_pic->height;
    final_pic->width = init_pic->width;

    final_pic->data = malloc(init_pic->height * init_pic->width * sizeof(struct pixel));

    for (int64_t i = 0; i < final_pic->height; i++) {
        for (int64_t j = 0; j < final_pic->width; j++) {
            final_pic->data[i * final_pic->width + j] = init_pic->data[i * init_pic->width + j];
        }
    }
}

void flip_h(struct image* init_pic, struct image* final_pic){
    final_pic->height = init_pic->height;
    final_pic->width = init_pic->width;

    final_pic->data = malloc(final_pic->height * final_pic->width * sizeof(struct pixel));

    for (int64_t i = 0; i < init_pic->height; i++) {
        for (int64_t j = 0; j < init_pic->width; j++) {
            final_pic->data[i * final_pic->width + (init_pic->width - 1 - j)] =
                    init_pic->data[i * init_pic->width + j];
        }
    }
}

void flip_v(struct image* init_pic, struct image* final_pic){
    final_pic->height = init_pic->height;
    final_pic->width = init_pic->width;

    final_pic->data = malloc(final_pic->height * final_pic->width * sizeof(struct pixel));

    for (int64_t i = 0; i < init_pic->height; i++) {
        for (int64_t j = 0; j < init_pic->width; j++) {
            final_pic->data[(init_pic->height - 1 - i) * final_pic->width + j] =
                    init_pic->data[i * init_pic->width + j];
        }
    }
}

void cw_90(struct image* init_pic, struct image* final_pic){
    final_pic->width = init_pic->height;
    final_pic->height = init_pic->width;

    final_pic->data = malloc(final_pic->height * final_pic->width * sizeof(struct pixel));

    for (int64_t i = 0; i < init_pic->height; i++) {
        for (int64_t j = 0; j < init_pic->width; j++) {
            final_pic->data[j * final_pic->width + i] =
                    init_pic->data[i * init_pic->width + (init_pic->width - 1 - j)];
        }
    }
}

void ccw_90(struct image* init_pic, struct image* final_pic){
    final_pic->width = init_pic->height;
    final_pic->height = init_pic->width;

    final_pic->data = malloc(final_pic->width * final_pic->height * sizeof(struct pixel));

    for (int64_t i = 0; i < init_pic->height; i++) {
        for (int64_t j = 0; j < init_pic->width; j++) {
            final_pic->data[j * final_pic->width + init_pic->height - 1 - i] =
                    init_pic->data[i * init_pic->width + j];
        }
    }
}

