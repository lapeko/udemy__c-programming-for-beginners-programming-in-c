#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    printf("Enter file name:\n");
    char filename[20];
    char path[30];

    scanf("%s", filename);
    strcpy(path, "chapter32-fs\\");
    strcat(path, filename);

    FILE *file;
    file = fopen(path, "r");

    if (file == NULL) {
        perror("File does not exist");
        exit(1);
    };

    char c;
    const int alphabet_size = 'z' - 'a' + 1;
    int arr[alphabet_size] = {};

    while ((c = fgetc(file)) != EOF)
        if (c >= 'a' && c <= 'z')
            arr[c - 'a']++;

    int max_index = 0;
    for (int i = 0; i < alphabet_size; i++) {
        printf("%c: %d\n", i + 'a', arr[i]);
        if (arr[max_index] < arr[i]) max_index = i;
    }

    printf("\nLetter with max appearances is: \"%c\"\n", max_index + 'a');

    fclose(file);

    return 0;
}