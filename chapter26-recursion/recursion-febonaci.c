#include <stdio.h>

int fibonacci(int index) {
    if (index == 1)
        return 0;
    if (index == 2)
        return 1;
    return fibonacci(index - 2) + fibonacci(index - 1);
}

int main() {
    int res = fibonacci(10);
    printf("%d", res);
    return 0;
}
