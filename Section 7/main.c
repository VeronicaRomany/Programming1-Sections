#include <stdio.h>

int main() {

    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fprintf(file, "Hello, World!\n");
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char buffer[100];
    fscanf(file, "%[^\n]", buffer);
    printf("Data from file: %s\n", buffer);
    return 0;
}
