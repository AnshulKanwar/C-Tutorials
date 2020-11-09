#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4-i; j++)
        {
            printf("  ");
        }

        for (int k = i;  k >= -i ; k--)
        {
            printf("%d ", (2*i+1)-abs(k));
        }
        printf("\n");
    }

    return 0;
}
