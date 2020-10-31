#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    printf("Enter Third number: ");
    scanf("%d", &c);

    if (a>b && a>c)
        printf("%d is greatest\n", a);
    else if(b>c && b>a)
        printf("%d is greatest\n", b);
    else
        printf("%d is greatest", c);

    return 0;
}