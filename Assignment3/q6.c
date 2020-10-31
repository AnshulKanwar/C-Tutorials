#include <stdio.h>

int main() {
    float n;
    printf("Enter number: ");
    scanf("%f", &n);

    int i = (int) n;

    printf("%d\n", i%10);
    printf("%d\n", i%100);
    printf("%d\n", i);
    return 0;
}