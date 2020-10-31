#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("%d\n", n);
    
    int except_first = n%100;
    printf("%d\n", except_first);

    int except_first_two = except_first%10;
    printf("%d\n", except_first_two);

    return 0;
}