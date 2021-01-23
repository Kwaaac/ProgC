/*
 * Created by kwaaac on 18/11/2020.
*/
#include <stdio.h>
#include "syracuse.h"

int main(int argc, char* argv[]){

    unsigned long i;
    unsigned long fly;
    unsigned long tab[MAX_VALUE];

    for(i = 0; i < MAX_VALUE; i++){
        tab[i] = -1;
    }

    for(i = 1; i < MAX_VALUE; i++) {

        fly = compute_fly_memoisation(i, tab);
        printf("%ld\n", i);
        printf("Fly length: %ld\n\n", fly);

        tab[i] = fly;
    }

    return 0;
}
