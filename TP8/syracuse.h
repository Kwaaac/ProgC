/*
*Created by kwaaac on 18/11/2020.
*/

#ifndef TP8_SYRACUSE_H
#define TP8_SYRACUSE_H

#define MAX_VALUE 1000000

unsigned long give_new_value(unsigned long value);

unsigned long print_suite(unsigned long value);

unsigned long compute_fly(unsigned long value);

unsigned long compute_fly_memoisation(unsigned long value, unsigned long *tab);

#endif /* TP8_SYRACUSE_H */
