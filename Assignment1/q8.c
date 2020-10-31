#include <stdio.h>

int main() {
    int choice;
    float C,F;
    printf("Enter 1 to convert from Celsius to Fahreheit and \
2 to convert from Fahreheit to Celsius: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &C);
        F = ((9.0/5.0) * C) + 32;
        printf("Temperature in Fahreheit is %f\n", F);
        break;
    
    case 2:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &F);
        C = (5.0/9.0) * (F-32);
        printf("Temperature in Celsius is %f\n", C);
        break;

    default:
        printf("Invalid Choice\n");
        break;
    }
    return 0;
}
