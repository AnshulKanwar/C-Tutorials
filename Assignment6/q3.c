#include <stdio.h>

int using_for();
void using_while();
void using_do_while();

int main()
{
    printf("****** Using For ******\n");

    for (int i=2; i<=500; i++)
    {
        if (using_for(i))
            printf("%d\n", i);
    }

    printf("\n****** Using While ******\n");

    int i=0;
    while (i<=500)
    {
        if (using_while(i))
            printf("%d\n", i);
        i++;
    }

    printf("\n****** Using Do While ******\n");
    i=0;
    do
    {
        if (using_do_while(i))
            printf("%d\n", i);
        i++;
        
    } while (i<=500);

    return 0;
}



# Using For loop
int using_for(int i)
{
    for (int j=2; j<i; j++)
    {
        if (i%j == 0)
            return 0;
    }
    return 1;
}



# Using While Loop
int using_while(int i)
{
    int j=0;
    while (j<i)
    {
        if (i%j == 0)
            return 0;
    }
    return 1;
}



# Using Do While Loop
int using_while(int i)
{
    int j=0;
    do
    {
        if (i%j == 0)
            return 0;
    } while (j<i);

    return 1;
}
