#include <stdio.h>

int main(int argc, char *argv[]) {
    char c;
    FILE* f = fopen("exo5.c", "r");

    while((c = fgetc(f)) != EOF){
        putchar(c);
    }

    fclose(f);

    return 0;
}