#include <stdio.h>

int main()
{
    int Addition(int a, int b);
    int Subtraction(int a, int b);
    int Multiplication(int a, int b);
    int Division(int a, int b);

    int choice;
    printf("Please Enter your Choice\n");
    printf("1.\tAddition\n");
    printf("2.\tSubtraction\n");
    printf("3.\tMultiplication\n");
    printf("4.\tDivision\n");
    scanf("%d", &choice);

    int a,b;
    switch (choice) {
        case 1:
            printf("Enter Two Number separated by space\n");
            scanf("%d %d", &a, &b);
            printf("Sum of %d and %d is %d\n", a, b, Addition(a, b));
            break;
        case 2:
            printf("Enter Two Number separated by space\n");
            scanf("%d %d", &a, &b);
            printf("Subtraction of %d and %d is %d\n", a, b, Subtraction(a, b));
            break;
        case 3:
            printf("Enter Two Number separated by space\n");
            scanf("%d %d", &a, &b);
            printf("Multiplication of %d and %d is %d\n", a, b, Multiplication(a, b));
            break;
        case 4:
            printf("Enter Two Number separated by space\n");
            scanf("%d %d", &a, &b);
            (b==0)?printf("Cannot divide by zero\n"):printf("Division of %d and %d is %d\n", a, b, Division(a, b));
            break;
        default:
            printf("Invalid Choice\n");
    }
    return 0;
}


int Addition(int a, int b)
{
    return a+b;
}

int Subtraction(int a, int b)
{
    return a-b;
}

int Multiplication(int a, int b)
{
    return a*b;
}
int Division(int a, int b)
{
    return a/b;
}
