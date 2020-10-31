#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    printf("Enter Third number: ");
    scanf("%d", &c);

    int largest = (a>b && a>c)?a:(b>c && b>a)?b:c;

    printf("%d is largest\n", largest);

    return 0;
}