#include "stdio.h"

int main() {
    double width, height;
    printf("Enter width\n");
    scanf("%lf", &width);
    printf("Enter height\n");
    scanf("%lf", &height);
    printf("Area is %.2lf", width * height);
    return 0;
}