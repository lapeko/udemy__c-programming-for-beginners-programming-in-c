#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *file;
    file = fopen("chapter32-fs\\powers.txt", "w");

    if (file == NULL) {
        perror("File open failure\n");
        exit(1);
    };

    for (int i = 1; i < 10; i++)
        fprintf(file, "%d\t%d\n", i, i * i);

    fclose(file);

    return 0;
}
