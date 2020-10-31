#include <stdio.h>

int main() {
    char a;
    printf("Enter character: ");
    scanf("%c", &a);

    if (a>=97 && a<=122)
    {
        printf("Character is in lower case ");
        if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
            printf("and a vowel\n");
        else
            printf("and a consonant\n");
    }
    else if (a>=65 && a<=90)
    {
        printf("Character is in upper case \n");
    }
    else
    {
        printf("Character is digit ");
        int n = (int) a - 48;
        printf("%d", n);
        if (n%2==0 && n%5==0)
            printf("and divisible by 2 and 5\n");
        else
            printf("and not divisible by 2 and 5\n");
    }

   return 0; 
}