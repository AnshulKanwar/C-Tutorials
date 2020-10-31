#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    int d;
    d = a;
    a = c;
    c = b;
    b = d;

    printf("Swapping with fourth variable:\n");
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
    printf("Value of c is %d\n", c);
    
    return 0;
}