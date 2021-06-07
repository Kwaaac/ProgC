#include <stdlib.h>
#include <stdio.h>

/**
 * Exchange binary datas contains in two zones
 * @param z1 the first zone
 * @param z2 the second zone
 * @param size the size of the zones
*/
void swap_mem(void *z1, void *z2, size_t size)
{
    int i;
    char tmp;

    char *a = (char *)z1;
    char *b = (char *)z2;

    for (i = 0; i < size; i++){
        tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }


}

int main(int argc, char *argv[])
{
    int int_1 = 10, int_2 = 94;
    double dbl_1 = 3.14, dbl_2 = 1.61;
    char* str_1 = "toto";
    char *str_2 = "tata";

    /* tests with differents type of data */
    printf("[ in 1] int 1 = %d, int 2 = %d\n", int_1, int_2);
    swap_mem(&int_1, &int_2, sizeof(int));
    printf("[out 1] int 1 = %d, int 2 = %d\n", int_1, int_2);

    printf("[ in 2] dbl_1 = %f, dbl_2 = %f\n", dbl_1, dbl_2);
    swap_mem(&dbl_1, &dbl_2, sizeof(double));
    printf("[out 2] dbl_1 = %f, dbl_2 = %f\n", dbl_1, dbl_2);

    printf("[ in 3] str_1 = %s, str_2 = %s\n", str_1, str_2);
    swap_mem(&str_1, &str_2, sizeof(str_1));
    printf("[out 3] str_1 = %s, str_2 = %s\n", str_1, str_2);

    return 0;
}