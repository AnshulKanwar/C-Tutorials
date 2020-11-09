#include <stdio.h>
#include <math.h>

int main() {
    float principal,rate;
    int time;
    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter rate: ");
    scanf("%f", &rate);
    rate = rate/100;
    printf("Enter time: ");
    scanf("%d", &time);

    float simpleInterest = principal * rate * time;
    printf("Simple interest is %.2f\n", simpleInterest);

    float compoundInterest = (principal * pow(1 + rate, time)) - principal;
    printf("Compund interest is %.2f\n", compoundInterest);
    return 0;
}
