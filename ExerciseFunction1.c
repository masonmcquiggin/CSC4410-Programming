#include <stdio.h>

void convertTemperature() {
    int fTemp;
    float cTemp;

    printf("Enter a temperature in Fahrenheit: ");
    scanf("%d", &fTemp);

    cTemp = (fTemp - 32) / 1.8;

    printf("The temperature in Celsius is: %.1f\n", cTemp);
}

int main() {
    convertTemperature();
    return 0;
}
