#include <stdio.h>

int main() {
    // Declare and initialize variables
    double myDouble = 3.14;
    int myInt = 42;
    char myChar = 'A';

    // Declare and initialize pointers
    double *ptrDouble = &myDouble;
    int *ptrInt = &myInt;
    char *ptrChar = &myChar;

    // Print details of variables
    printf("myDouble: Address = %p, Value = %.2f, Size = %zu bytes\n", (void*)&myDouble, myDouble, sizeof(myDouble));
    printf("myInt:    Address = %p, Value = %d, Size = %zu bytes\n", (void*)&myInt, myInt, sizeof(myInt));
    printf("myChar:   Address = %p, Value = %c, Size = %zu bytes\n", (void*)&myChar, myChar, sizeof(myChar));

    // Print details of pointers
    printf("ptrDouble: Address = %p, Points to = %p, Size = %zu bytes\n", (void*)&ptrDouble, (void*)ptrDouble, sizeof(ptrDouble));
    printf("ptrInt:    Address = %p, Points to = %p, Size = %zu bytes\n", (void*)&ptrInt, (void*)ptrInt, sizeof(ptrInt));
    printf("ptrChar:   Address = %p, Points to = %p, Size = %zu bytes\n", (void*)&ptrChar, (void*)ptrChar, sizeof(ptrChar));

    return 0;
}
