#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);

    float d = (a-b)/(b+c);
    printf("Value of d is %.2f", d);
    return 0;
}
