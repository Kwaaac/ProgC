#include <stdio.h>
#include "bit.h"

int main() {
    unsigned long int bob = 7;
    print_ULI(bob);

    set_positive_bit_ULI(&bob, 63);

    print_ULI(bob);

    set_negative_bit_ULI(&bob, 63);
    set_negative_bit_ULI(&bob, 63);

    print_ULI(bob);
    return 0;
}
