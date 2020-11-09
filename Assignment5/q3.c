#include <stdio.h>

int main()
{
    char c;
    printf("Enter Character\n");
    scanf("%c", &c);

    switch(c)
    {
        case 'j':
        case 'J':
            printf("January and June and July\n");
            break;
        case 'f':
        case 'F':
            printf("February\n");
            break;
        case 'm':
        case 'M':
            printf("March and May\n");
            break;
        case 'a':
        case 'A':
            printf("April and August\n");
            break;
        case 's':
        case 'S':
            printf("September\n");
            break;
        case 'o':
        case 'O':
            printf("October\n");
            break;
        case 'n':
        case 'N':
            printf("November\n");
            break;
        case 'd':
        case 'D':
            printf("December\n");
            break;
        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
