#include <stdlib.h>

void print_int1(const int* num) {
    int a = 1;
    num = &a;
}

void print_int2(int* const num) {
    *num = 1;
}

int main() {

    return 0;
}