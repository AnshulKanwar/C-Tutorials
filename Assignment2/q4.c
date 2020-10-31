#include <stdio.h>

int main() {
    float a,b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    int c = a + b;

    printf("Value of c is %d\n", c);

    return 0;
}
