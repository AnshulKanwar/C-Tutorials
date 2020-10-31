#include <stdio.h>

int main()
{
	int a;
	printf("Enter number: ");
	scanf("%d", &a);	

	if (a/100 == a%10)
		printf("Number is palindrome\n");
	else
		printf("Number is not palindrome\n");

	return 0;
}
