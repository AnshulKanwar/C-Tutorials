#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    printf("Enter Third number: ");
    scanf("%d", &c);

    if (a>b)
    {
        if (a>c)
            printf("%d is greatest\n", a);
    }
    if (b>a)
    {
        if (b>c)
            printf("%d is greatest\n", b);
    }
    if (c>a)
    {
        if (c>b)
            printf("%d is greatest\n", c);
    }
    return 0;
}