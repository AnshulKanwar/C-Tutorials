#include <stdio.h>

int main()
{
		float a, b;
		printf("Enter the Two numbers\n");
		scanf("%f %f", &a, &b);
		
		if (a-b < 0.5 && a-b > -0.5)
						printf("Approximate number\n");
		else
						printf("Not an approximate number\n");

    return 0;
}
