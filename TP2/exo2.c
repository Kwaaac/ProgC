#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", a + b);

    printf("%d\n", atoi(argv[1]) + atoi(argv[2]));

    return 0;
}