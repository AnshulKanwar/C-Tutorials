#include <stdio.h>

int main()
{
  int n;
	printf("Enter the Ballon's number\n");
	scanf("%d", &n);

	if (n%3==0 && n%7==0)
		printf("This ballon can fly to miney.\n");
	else
		printf("This ballon cannot fly to miney.\n");

	return 0;
}
