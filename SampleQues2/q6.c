#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    n%2 ? printf("%d is an odd number\n", n) : printf("%d is an even number\n", n);

    return 0;
}