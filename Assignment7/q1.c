#include <stdio.h>

int factorial(int n)
{
    if (n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += factorial(i)/(float)i;
    }

    printf("%d\n", sum);

    return 0;
}
