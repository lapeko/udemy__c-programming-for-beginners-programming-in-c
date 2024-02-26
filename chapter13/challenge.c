#include <stdio.h>

int main() {
    int a, b, c;
    printf("Type three int values separated by spaces:\n");

    scanf("%d %d %d", &a, &b, &c);

    printf(a == b ? "EQUAL\n" : "NOT EQUAL\n");
    printf(a == b && b == c ? "EQUAL\n" : "NOT EQUAL\n");
    printf(a < b && b < c ? "ASCENDING\n" : "NOT ASCENDING\n");
    printf(a < 0 ? "-1" : a > 0 ? "1" : "0");

    return 0;
}