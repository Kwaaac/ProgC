#include <stdio.h>

int iter(int a, int n) {
    int i;
    int mul = a;
    for (i = n - 1; i > 0; i--) {
        a *= mul;
    }
    return a;
}

int rec(int a, int n){
    if(n == 0){
        return 1;
    }

    if(n < 0){
        return 0;
    }

    return a * rec(a, n - 1);

}


int main(int argc, char *argv[]) {

    printf("%d\n", iter(2, 8));
    printf("%d\n", rec(2, 8));

    return 0;
}