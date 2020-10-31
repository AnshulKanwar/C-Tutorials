#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter side1: ");
    scanf("%d", &side1);
    printf("Enter side2: ");
    scanf("%d", &side2);
    printf("Enter side1: ");
    scanf("%d", &side3);

    if (side1==side2 && side2==side3)
        printf("Triangle is equilateral\n");
    else if(side1==side2 || side1==side3 || side2==side3)
        printf("Triangle is isosceles\n");
    else 
        printf("Triangle is scalene\n");

    return 0;
}