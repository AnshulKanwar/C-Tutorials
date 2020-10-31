#include <stdio.h>

int main()
{
    int user_id, units;
    char name[20];

    printf("Enter the user id of user\n");
    scanf("%d", &user_id);

    printf("Enter the name of user\n");
    scanf(" %[^\n]%*c", &name);

    printf("Enter the number of units consumed by user\n");
    scanf("%d", &units);
    
    int rate;

    if (units <= 100)
        rate = 1;
    else if (units <=300)
        rate = 2;
    else
        rate = 3;

    float amount = rate*units;

    if (amount > 1000)
        amount += 0.15*amount;

    printf("Charge details\n");
    printf("%d %s %.2f\n", user_id, name, (amount < 50)? 50.00:amount);

    return 0;
}
