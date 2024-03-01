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

void print_nums(int count, int num1, int num2) {
    if (count < 1) return;
    printf("%d", num1);
    print_nums(count - 1, num1, num2);
    printf("%d", num2);
    printf("%d\n", num2);
}

int check_order(int num) {
    if (num < 100 && num >= 10) return num / 10 < num % 10 ? 1 : -1;

    int res = check_order(num / 10);
    if (res == (num / 100 < num / 10 % 10 ? 1 : -1)) return res;

    return 0;
}

int main() {
//    printf("fibonacci: %d\n", fibonacci(10));
//
//    printf("sum: %d\n", sun_of_digits(12345));
//
//    printf("count: %d\n", count_of_digits(12345));
//
//    print_nums(3, 1, 2);

    printf("Acs?: %d", check_order(321));

    return 0;
}
