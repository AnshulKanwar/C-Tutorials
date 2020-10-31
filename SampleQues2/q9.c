#include <stdio.h>

int main()
{
    int roll_no, marks;
    char name[20];

    printf("Enter the roll number of student\n");
    scanf("%d", &roll_no);
    printf("Enter the name of student\n");
    scanf(" %[^\n]%*c", &name);
    printf("Enter the total mark of student\n");
    scanf(" %d", &marks);

    char grade;

    if (marks>=90)
        grade = 'A';
    else if (marks >=80)
        grade = 'B';
    else if (marks >=70)
        grade = 'C';
    else if (marks >=60)
        grade = 'D';
    else if (marks >=50)
        grade = 'E';
    else
        printf("%d %s %d %s\n", roll_no, name, marks, "Fail");
        return 0;

    printf("%d %s %d %c\n", roll_no, name, marks, grade);
    return 0;
}
