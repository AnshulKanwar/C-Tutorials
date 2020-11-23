#include <stdio.h>

int count = 0;

int count_even(int *ptr)
{
    if ((*ptr)%2 == 0)
        count += 1;
    return count;
}

int main()
{
    int n, num;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);
        count_even(&num);
    }

    printf("Value of count is: %d\n", count);

    return 0;
}
