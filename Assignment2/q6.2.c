#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    b = b+c;
    c = b-c;
    b = b-c;

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Swapping without fourth variable:\n");
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
    printf("Value of c is %d\n", c);

    return 0;
}
