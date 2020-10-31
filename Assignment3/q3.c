#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Enter x in degree: ");
    scanf("%f", &x);

    float x_rad = (M_PI/180) * x;

    printf("sin(x) = %.2f\n", sin(x_rad));
    printf("cos(x) = %.2f\n", cos(x_rad));

    return 0;
}