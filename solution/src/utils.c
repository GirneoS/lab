#include <stdlib.h>
#include <utils.h>

void free_img_data(struct image* image){
    free(image->data);
}
