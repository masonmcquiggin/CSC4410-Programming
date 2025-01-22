#include <stdio.h> 

    int main() {
        int myNumbers[4] = {25, 50, 75, 100};
        int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

        // print the second element using pointer
        printf("%d\n", myNumbers[1]);

        // print all elements using a for loop
        for (int i = 0; i < length; i++) {
            printf("%d: %d\n", i, myNumbers[i]);
        }
        return 0;
}

