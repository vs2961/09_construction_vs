#include "construction.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));
    struct thing *p;
    p = new_thing(rand(), "toy");
    print_struct(*p);
    change_thing(p, "other_toy", 20203.45);
    print_struct(*p);
    free(p);
}

