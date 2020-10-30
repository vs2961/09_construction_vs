#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct chips {
    float price;
    char name[256];

    struct chips *next;
};

void print_struct(struct chips x) {
    for (int i = 0; *(x.name + i); i++) {
        printf("%c", *(x.name + i));
    }
    printf(": %f\n", x.price);
    return;
}

struct chips *new_chips(float pr, char *it) {

    struct chips *nu;

    nu = malloc( sizeof(struct chips) );
    strncpy(nu->name, it, sizeof(nu->name)-1);
    nu->price = pr;

    return nu;
}

void change_chips(struct chips *x, char *it, float pr) {
    x -> price = pr;
    strncpy(x->name, it, sizeof(x->name)-1);
}    

void free_chips(struct chips *x) {
    free(x -> name);
    free(x);
    return;
}

