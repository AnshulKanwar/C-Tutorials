#include <stdio.h>

int main()
{
    int marks;
    printf("Enter Marks\n");
    scanf("%d", &marks);

    switch (marks/10) {
        case 0:
        case 1:
        case 2:
            printf("Fail\n");
            break;
        case 3:
        case 4:
            printf("D grade\n");
            break;
        case 5:
            printf("C grade\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("B grade\n");
            break;
        case 9:
            printf("A grade\n");
            break;
    }    

    return 0;
}
