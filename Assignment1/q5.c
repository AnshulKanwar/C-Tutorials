#include <stdio.h>

int main() {
    int a,b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    float division = a/b;
    float mod = a%b;

    printf("Sum is %d\n", sum);
    printf("Difference is %d\n", difference);
    printf("Product is %d\n", product);
    printf("Division is %.2f\n", division);
    printf("Mod is %.2f\n", mod);
    return 0;
}
