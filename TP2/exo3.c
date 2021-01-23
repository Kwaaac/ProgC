#include <stdio.h>
#include <stdlib.h>

void iter(int n) {
    int i;
    printf("ITER\n");

    for (i = n; i > 0; i--) {
        printf("%d ", i);
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n\n");
}

void rec(int n) {
    if (n == 0) {
        return;
    }

    printf("%d ", n);
    rec(n - 1);
    printf("%d ", n);
}

void rec_wrap(int n) {
    printf("REC\n");
    rec(n);
    printf("\n");
}

int main(int argc, char *argv[]) {

    iter(atoi(argv[1]));
    rec_wrap(atoi(argv[1]));

    return 0;
}

