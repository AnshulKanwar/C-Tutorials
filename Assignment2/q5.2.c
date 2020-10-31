#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Swapping without third variable:\n");
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);

    return 0;
}