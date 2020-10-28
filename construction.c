#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct thing {
    float price;
    char item[256];
};

void print_struct(struct thing x) {
    printf("Your item is ");
    for (int i = 0; *(x.item + i); i++) {
        printf("%c", *(x.item + i));
    }
    printf("\n");
    printf("Your item's price is %f\n", x.price);
    return;
}


struct thing *new_thing(float pr, char *it) {

    struct thing *nu;

    nu = malloc( sizeof(struct thing) );

    strncpy(nu->item, it, sizeof(nu->item)-1);
    nu->price = pr;

    return nu;
}

void change_thing(struct thing *x, char *it, float pr) {
    x -> price = pr;
    strncpy(x->item, it, sizeof(x->item)-1);
}
    
