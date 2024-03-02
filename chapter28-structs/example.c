#include <stdio.h>

struct Point {
    int x;
    int y;
};

typedef struct {
    int x;
    int y;
} Point2;

int main() {
    struct Point p = {.x = 1, 2};
    Point2 p2 = {.x = 1, 2};

    return 0;
}