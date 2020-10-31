#include <stdio.h>

int main()
{
	int maths, phys, chem;
	printf("Enter marks in Mathematics: ");
	scanf("%d", &maths);
	printf("Enter marks in Physics: ");
	scanf("%d", &phys);
	printf("Enter marks in Chemistry: ");
	scanf("%d", &chem);

	int total = maths+phys+chem;

	if (total >= 190 || maths+chem >= 130)
		printf("The candidate is eligible for admission\n");
	else
		printf("The candidate is not eligible for admission\n");
	return 0;
}
