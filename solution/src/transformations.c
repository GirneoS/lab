#include <stdlib.h>
#include "image.h"

void none(struct image* init_img, struct image* transformed_img){
    transformed_img->height = init_img->height;
    transformed_img->width = init_img->width;

    transformed_img->data = malloc(init_img->height * init_img->width * sizeof(struct pixel));

    for (int64_t i = 0; i < transformed_img->height; i++) {
        for (int64_t j = 0; j < transformed_img->width; j++) {
            transformed_img->data[i * transformed_img->width + j] = init_img->data[i * init_img->width + j];
        }
    }
}

void flip_h(struct image* init_img, struct image* transformed_img){
    transformed_img->height = init_img->height;
    transformed_img->width = init_img->width;

    transformed_img->data = malloc(transformed_img->height * transformed_img->width * sizeof(struct pixel));

    for (int64_t i = 0; i < init_img->height; i++) {
        for (int64_t j = 0; j < init_img->width; j++) {
            transformed_img->data[i * transformed_img->width + (init_img->width - 1 - j)] =
                    init_img->data[i * init_img->width + j];
        }
    }
}

void flip_v(struct image* init_image, struct image* transformed_img){
    transformed_img->height = init_image->height;
    transformed_img->width = init_image->width;

    transformed_img->data = malloc(transformed_img->height * transformed_img->width * sizeof(struct pixel));

    for (int64_t i = 0; i < init_image->height; i++) {
        for (int64_t j = 0; j < init_image->width; j++) {
            transformed_img->data[(init_image->height - 1 - i) * transformed_img->width + j] =
                    init_image->data[i * init_image->width + j];
        }
    }
}

void cw_90(struct image* init_img, struct image* transformed_img){
    transformed_img->width = init_img->height;
    transformed_img->height = init_img->width;

    transformed_img->data = malloc(transformed_img->height * transformed_img->width * sizeof(struct pixel));

    for (int64_t i = 0; i < init_img->height; i++) {
        for (int64_t j = 0; j < init_img->width; j++) {
            transformed_img->data[j * transformed_img->width + i] =
                    init_img->data[i * init_img->width + (init_img->width - 1 - j)];
        }
    }
}

void ccw_90(struct image* init_img, struct image* transformed_img){
    transformed_img->width = init_img->height;
    transformed_img->height = init_img->width;

    transformed_img->data = malloc(transformed_img->width * transformed_img->height * sizeof(struct pixel));

    for (int64_t i = 0; i < init_img->height; i++) {
        for (int64_t j = 0; j < init_img->width; j++) {
            transformed_img->data[j * transformed_img->width + init_img->height - 1 - i] =
                    init_img->data[i * init_img->width + j];
        }
    }
}
