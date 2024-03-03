#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *file;
    file = fopen("D:\\learning\\udemy__c-programming-for-beginners-programming-in-c\\chapter32-fs\\lorem.txt", "r");

    if (file == NULL) {
        printf("File open failure\n");
        exit(1);
    }

    int char_counter = 0;
    int line_counter = 1;

    char c;
    while((c = fgetc(file)) != EOF) {
        if (c =='\n') line_counter++;
        char_counter++;
    }

    printf("\n\n");
    printf("Count of characters is %d\n", char_counter);
    printf("Count of lines is %d\n", line_counter);

    fclose(file);

    return 0;
}