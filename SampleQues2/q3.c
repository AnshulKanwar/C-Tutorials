#include <stdio.h>

int main() {
    int n, positiveNumbers=0, negativeNumbers=0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int number;

    for (int i=0; i<n; i++)
    {
        scanf("%d", &number);
        if (number >= 0)
            positiveNumbers++;
        else
            negativeNumbers++;
    }

    printf("Number of positive numbers entered is %d and the number of negative numbers \
entered is %d", positiveNumbers, negativeNumbers);
    return 0;
}