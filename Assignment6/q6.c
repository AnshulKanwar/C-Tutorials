#include <stdio.h>
#include <math.h>

int main()
{
    void area();
    void perimeter();

    int choice;

    printf("Enter 1 for computing area and 2 for computing perimeter\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            area();
            break;
        case 2:
            perimeter();
            break;
        default:
            printf("Invalid Choice\n");
    }

    return 0;
}

void area()
{
    int choice;

    printf("Please Enter you choice\n");
    printf("1. Square \n2. Rectangle \n3. Circle\n");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1: ;
            int side;
            printf("Enter side of square\n");
            scanf("%d", &side);
            printf("Area of square is %d \n", side*side);
            break;
        case 2: ;
            int length, breadth;
            printf("Enter length and breadth\n");
            scanf("%d %d", &length, &breadth);
            printf("Area of rectangle is %d \n", length*breadth);
            break;
        case 3: ;
            int radius;
            printf("Enter radius of circle\n");
            scanf("%d", &radius);
            printf("Area of circle is %.2f \n", M_PI*radius*radius);
            break;
        default:
            printf("Invalid choice\n");
    }
}

void perimeter()
{
    int choice;

    printf("Please Enter you choice\n");
    printf("1. Square \n2. Rectangle \n3. Circle\n");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1: ;
            int side;
            printf("Enter side of square\n");
            scanf("%d", &side);
            printf("Perimeter of square is %d \n", 4*side);
            break;
        case 2: ;
            int length, breadth;
            printf("Enter length and breadth\n");
            scanf("%d %d", &length, &breadth);
            printf("Perimeter of rectangle is %d \n", 2*(length+breadth));
            break;
        case 3: ;
            int radius;
            printf("Enter radius of circle\n");
            scanf("%d", &radius);
            printf("Perimeter of circle is %.2f \n", 2*M_PI*radius);
            break;
        default:
            printf("Invalid choice\n");
    }
}
