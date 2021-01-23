/*
* Created by kwaaac on 18/11/2020.
*/
#include <stdio.h>
#include "syracuse.h"

unsigned long give_new_value(unsigned long value) {
    if (value % 2 == 0)
        return value / 2;

    return (value * 3) + 1;
}

int is_value_in_tab(unsigned long value, unsigned long* tab){
    if(value >= MAX_VALUE || tab[value] == -1){
        return 1;
    }

    return 0;
}

unsigned long print_suite(unsigned long value) {
    printf("%ld ", value);
    if (value == 1)
        return 0;

    return give_new_value(value) + 1;
}

unsigned long compute_fly(unsigned long value) {
    return print_suite(value);
}

unsigned long compute_fly_memoisation(unsigned long value, unsigned long *tab) {
    if (value == 1) {
        return 0;
    }

    if (is_value_in_tab(value, tab) == 0){
        return tab[value];
    }

    return compute_fly_memoisation(give_new_value(value), tab) + 1;
}

