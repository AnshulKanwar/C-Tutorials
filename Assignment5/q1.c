#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d", &n);

    int digits[20];
    int a, i=0;
    
    while (n != 0)
    {
        a = n%10;
        n = n/10;
        digits[i] = a;
        i++;
    }

    for (i = sizeof(digits)/sizeof(digits[0])-1; i >=0 ; i--) 
    {
        switch(digits[i])
        {
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
        print("\n");
    }    

    return 0;
}
