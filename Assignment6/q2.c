#include <stdio.h>

int main()
{
    int i, sum;
    for (int n = 1; n <= 500; ++n) {
        i = 1;
        sum = 0;
        while (i<n)
        {
            if (n%i == 0)
            {
                sum += i;        
            }
            i++;
        }
        if (sum == n)
            printf("%d\n", n);
    }

    return 0;
}
