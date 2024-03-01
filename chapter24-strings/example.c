#include <stdio.h>


int main() {
    char name[20];

    printf("Enter you full name:\n");
    gets(name);
    printf("Your full name is: %s\n", name); // you can use puts(string)

    printf("Enter you name:\n");
    scanf("%5s", name);
    printf("Your name is: %s\n", name);

    return 0;
}