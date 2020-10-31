#include <stdio.h>

int main() {
    int n, count=0;

    printf("Enter the number\n");
    scanf("%d", &n);

    while (n%8 == 0)
    {
        count++;
        printf("Enter the number\n");
        scanf("%d", &n);
    }

    printf("The number of valid numbers entered is %d", count); 

    return 0;
}