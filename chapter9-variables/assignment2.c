#include "stdio.h"

int main() {
    double var1, var2, temp;

    printf("Enter value 1:\n");
    scanf("%lf", &var1);
    printf("Enter value 2:\n");
    scanf("%lf", &var2);

    printf("Values before swapping: var1: %lf, var2: %lf\n", var1, var2);

    temp = var1;
    var1 = var2;
    var2 = temp;

    printf("Values after swapping:  var1: %lf, var2: %lf\n", var1, var2);

    return 0;
}
