#include <stdio.h>

int factorial(int n)
{
    if (n==1 || n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int ll, ul, n, sum=0;
    printf("Enter lower limit:");
    scanf("%d", &ll);
    printf("Enter upper limit:");
    scanf("%d", &ul);

    printf("Strong numbers between %d and %d:", ll, ul);
    for(int i=ll; i<=ul; i++)
    {
        n = i;
        while (n > 0)
        {
            sum += factorial(n%10);
            n /= 10;
        }
        if (sum == i)
            printf("%d, ", i);
        sum = 0;
    }
    printf("\n");

    return 0;
}
