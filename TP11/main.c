#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"
#include "display.h"
#include "image.h"

int main() {
    srand(time(NULL));
    Plateau *p = allocate_plateau(4, 4);

    MLV_Image* image = MLV_load_image("data/panda.png");
    split_images("data/panda", image, 4, 4);


    free(p);
    return 0;
}
