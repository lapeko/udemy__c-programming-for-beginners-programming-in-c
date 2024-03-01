#include <stdio.h>

int fibonacci(int index) {
    if (index == 1)
        return 0;
    if (index == 2)
        return 1;
    return fibonacci(index - 2) + fibonacci(index - 1);
}

int sun_of_digits(int num) {
    if (num < 10) return num;
    return num % 10 + sun_of_digits(num / 10);
}

int count_of_digits(int num) {
    if (num < 10) return 1;
    return 1 + count_of_digits(num / 10);
}

int main() {
    int fib = fibonacci(10);
    printf("fibonacci: %d\n", fib);

    int sum = sun_of_digits(12345);
    printf("sum: %d\n", sum);

    int count = count_of_digits(12345);
    printf("count: %d\n", count);

    return 0;
}
