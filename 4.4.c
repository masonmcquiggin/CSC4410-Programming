#include <stdio.h>

int main() {
    FILE *fptr = fopen("filename.txt", "r");
    char buffer[100];

    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);

    return 0;
}