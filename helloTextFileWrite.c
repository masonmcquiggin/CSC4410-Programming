#include <stdio.h> 

int main() {
    FILE *fptr;

    fptr = fopen("hello.txt", "a");

    fprintf(fptr, "\nHello");
    fprintf(fptr, "\nHow are you?");
    fprintf(fptr, "\nMy name is Mason.");
    fprintf(fptr, "\nWhat's your name?");

    fclose(fptr);

    return 0;
}
