#include "stdio.h"

int main() {
    int grade1, grade2, grade3;

    printf("Enter grade 1\n");
    scanf("%d", &grade1);
    printf("Enter grade 2\n");
    scanf("%d", &grade2);
    printf("Enter grade 3\n");
    scanf("%d", &grade3);

    printf("Average of %d, %d and %d is %lf\n", grade1, grade2, grade3, (grade1 + grade2 + grade3) / 3.0);

    return 0;
}
