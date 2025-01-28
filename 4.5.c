#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct House {
        char address[100];
        int squareFeet;
        int bedrooms;
        int bathrooms;
        float price;
    };

    struct House houses[3] = {
        {"123 Florida Southern St", 350, 3, 2, 250000},
        {"101 East Palmetto St", 550, 4, 3, 350000},
        {"232 Holloway Dr", 690, 3, 2, 400000}
    };

    for (int i = 0; i < 3; i++) {
        printf("Address: %s\n", houses[i].address);
        printf("Square Feet: %d\n", houses[i].squareFeet);
        printf("Bedrooms: %d\n", houses[i].bedrooms);
        printf("Bathrooms: %d\n", houses[i].bathrooms);
        printf("Price: $%.2f\n\n", houses[i].price);
    }

    return 0;
}