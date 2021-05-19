#ifndef TP11_IMAGE_H
#define TP11_IMAGE_H
#define IMG_PATH "data/"

#include <MLV/MLV_image.h>

void split_images( const char *filename, MLV_Image *image, int lig, int col);

#endif /*TP11_IMAGE_H*/
