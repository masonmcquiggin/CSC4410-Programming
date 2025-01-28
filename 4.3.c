#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("filename.txt", "w");
    fprintf(fptr, "This is written using fprintf().\n");
    fclose(fptr);

    fptr = fopen("filename.txt", "a");
    fputs("This is written using fputs().\n", fptr);
    fclose(fptr);

    fptr = fopen("filename.txt", "a");
    fwrite("This is written using fwrite().\n", sizeof(char), 30, fptr);
    fclose(fptr);

    fptr = fopen("filename.txt", "r");
    char myString[100];
    while (fgets(myString, sizeof(myString), fptr) != NULL) {
        printf("%s", myString);
    }
    fclose(fptr);

    return 0;
}
