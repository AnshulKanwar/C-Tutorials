#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1+angle2+angle3 == 180)
    {
        if (angle1==angle2 && angle2==angle3)
            printf("Triangle is equilateral\n");
        else if(angle1==90 || angle2==90 || angle3==90)
        {
            if (angle1==45 || angle2==45 || angle3==45)
                printf("Triangle is right isoceles\n");
            else 
                printf("Triange is right\n");
        }
        else if(angle1==angle2 || angle2==angle3 || angle3==angle1)
            printf("Triange is isoceles");
        else
            printf("Triangle is not special\n");
    }
    else
    {
        printf("Not a triangle\n");
    }
    

    return 0;
}