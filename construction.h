struct thing {
    float price;
    char item[256];
};

void print_struct(struct thing x);
struct thing *new_thing(float pr, char *it);
void change_thing(struct thing *x, char *it, float pr);
