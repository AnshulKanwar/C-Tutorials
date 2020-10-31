#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int c;
    c = a;
    a = b;
    b = c;

    printf("Swapping with third variable:\n");
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);

    return 0;
}