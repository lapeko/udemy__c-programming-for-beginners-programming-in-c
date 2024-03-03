#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *file;
    file = fopen("chapter32-fs\\lorem.txt", "r");

    if (file == NULL) {
        printf("File open failure\n");
        exit(1);
    }

    int counter = 0;

    char c;
    while((c = fgetc(file)) != EOF) {
        printf("%c", c);
        counter++;
    }

    printf("\n\n");
    printf("Count of characters is %d\n", counter);

    fclose(file);

    return 0;
}