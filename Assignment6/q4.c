#include <stdio.h>

int main()
{
    printf("Using While loop\n");
    int i=1, j;
    while (i<=5)
    {
        j = 1;
        while (j<=10)
        {
            printf("%d\t", i*j);
            j++;
        }
        printf("\n");
        i++;
    }


    printf("\n\nUsing Do While loop\n");
    i=0;
    do
    {
        j = 1;
        do
        {
            printf("%d\t", i*j);
            j++;
        } while (j<=10);
        printf("\n");
        i++;
    } while (i<=5);

    return 0;
}
