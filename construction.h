struct chips {
    float price;
    char name[256];
};

void print_struct(struct chips x);
struct chips *new_chips(float pr, char *it);
void change_chips(struct chips *x, char *it, float pr);
