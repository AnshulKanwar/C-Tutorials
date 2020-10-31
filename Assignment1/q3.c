#include <stdio.h>

int main() {
	int i;
	float f;
	char ch;
	char s[20];

	scanf("%d", &i);
	scanf("%f", &f);
	scanf(" %c", &ch);
	scanf("\n");
	scanf("%[^\n]%*c", &s);

	printf("%d\n", i);
	printf("%.2f\n", f);
	printf("%c\n", ch);
	printf("%s\n", s);
	return 0;
}
