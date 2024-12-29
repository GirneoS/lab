//
// Created by мак on 29.12.2024.
//

#ifndef IMAGE_TRANSFORM_IO_H
#define IMAGE_TRANSFORM_IO_H

#include <image.h>
#include <read_status.h>
#include <write_status.h>

enum read_status read_img(char* path, struct image* img);
enum write_status write_img(char* path, struct image* img);

#endif //IMAGE_TRANSFORM_IO_H
