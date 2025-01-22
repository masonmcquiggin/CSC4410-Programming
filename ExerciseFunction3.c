#include <stdio.h>
#include <math.h>

void calculateArea() {
    int radius;
    double area;

    printf("Enter the radius: ");
    scanf("%d", &radius);

    area = M_PI * pow(radius, 2);

    printf("The area is: %.2f\n", area); 
}

int main() {
    calculateArea();
    return 0;
}
