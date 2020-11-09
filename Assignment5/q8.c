#include <stdio.h>

int main() {
    int sum_odd=0, sum_even=0;
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    // for loop
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]%2)
            sum_odd += arr[i];
        else
            sum_even += arr[i];
    }
    printf("Using for loop\n");
    printf("Sum of all odd numbers is %d\n", sum_odd);
    printf("Sum of all even numbers is %d\n\n", sum_even);

    sum_odd = 0;
    sum_even = 0;

    // while loop
    int i = 0;
    while (i<10)
    {
        if (arr[i]%2)
            sum_odd += arr[i];
        else
            sum_even += arr[i];
        i++;
    }
    printf("Using while loop\n");
    printf("Sum of all odd numbers is %d\n", sum_odd);
    printf("Sum of all even numbers is %d\n\n", sum_even);

    sum_odd = 0;
    sum_even = 0;

    // do-while loop
    i = 0;
    do
    {
        if (arr[i]%2)
            sum_odd += arr[i];
        else
            sum_even += arr[i];
        i++;
    } while (i<10);
    printf("Using do-while loop\n");
    printf("Sum of all odd numbers is %d\n", sum_odd);
    printf("Sum of all even numbers is %d\n", sum_even);

    
    return 0;
}