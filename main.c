#include "construction.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));

    struct chips *p;
    p = new_chips(rand(), "Pringles");

    print_struct(*p);
    change_chips(p, "Ruffles", 20203.45);

    print_struct(*p);
    free(p);
}

