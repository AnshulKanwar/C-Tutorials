#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);

    float S = (a+b+c) / 2.0;

    float area = sqrt(S * (S-a) * (S-b) * (S-c));

    printf("Area of triangle is: %f\n", area);
    return 0;
}
