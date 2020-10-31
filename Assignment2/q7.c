#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int ones_place = n%10;
    int tens_place = (n/10)%10;
    int hundreds_place = n/100;

    printf("Sum of digits: %d\n", ones_place+tens_place+hundreds_place);
    printf("Product of digits: %d\n", ones_place*tens_place*hundreds_place);

    return 0;
}