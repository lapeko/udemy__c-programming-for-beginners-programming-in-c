#include <stdio.h>

int main() {
    printf("Enter one digit in hex format\n");
    int hex;
    scanf("%x", &hex);
    for(; hex; hex = hex >> 1)
        printf(hex % 2 == 0 ? "0" : "1");
    return 0;
}
