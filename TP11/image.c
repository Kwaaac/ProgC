#include "image.h"

void split_images( const char *file_location, MLV_Image *image, int lig, int col) {
    int i, j;
    int img_width = MLV_get_image_width(image) / lig;
    int img_height = MLV_get_image_height(image) / col;
    MLV_Image *tmp;

    for (i = 0; i < lig; i++) {
        for (j = 0; j < col; j++) {
            tmp = MLV_copy_partial_image(image, i * img_width, j * img_height, img_width, img_height);
            MLV_save_image_as_bmp(tmp, "data/panda");
        }
    }
}
