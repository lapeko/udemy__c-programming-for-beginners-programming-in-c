#include <math.h>
#include "stdio.h"

int main() {
    int x1 = 1, y1 = -15, x2 = 4, y2 = -19;

    double res = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("%lf", res);

    return 0;
}
