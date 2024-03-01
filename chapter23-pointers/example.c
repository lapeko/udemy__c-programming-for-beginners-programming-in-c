#include <stdio.h>


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 0;
    int b = 1;

    swap(&a, &b);

    printf("a: %d, b: %d\n", a, b);
    printf("&a: %p, &b: %p\n", &a, &b);

    return 0;
}