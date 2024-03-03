#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *file;
    file = fopen("chapter32-fs\\powers.txt", "r");

    if (file == NULL) {
        perror("File open failure\n");
        exit(1);
    };

    int num, powered_num;

    while (fscanf(file, "%d %d", &num, &powered_num) == 2)
        printf("%d\t%d\n", num, powered_num);

    fclose(file);

    return 0;
}
