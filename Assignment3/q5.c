#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int ones_place = n%10;
    int tens_place = (n/10)%10;
    int hundreds_place = n/100;

    int reverse = (ones_place*100) + (tens_place*10) + (hundreds_place);
    printf("Number in reverse: %d\n", reverse);

    return 0;
}