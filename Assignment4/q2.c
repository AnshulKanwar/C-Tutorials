#include <stdio.h>

int main() {
    int customerId, units;
    char name[20];
    printf("Enter customer id: ");
    scanf("%d", &customerId);
    printf("Enter Name: ");
    gets(name);
    printf("Enter Units consumed: ");
    scanf("%d", &units);

    float rate, amount, netAmount, surcharge=0;    

    if (units < 200)
    {
        rate = 1.2;
        amount = rate * units;
        amount = (amount>100)?amount:100;
    }
    else if (units < 400)
    {
        rate = 1.5;
        amount = rate * units;
    }
    else if (units < 600)
    {
        rate = 1.8;
        surcharge = 1.8 * units * rate;
        amount = (rate * units); 
    }
    else 
    {
        rate = 2;
        surcharge = 2 * units * rate;
        amount = (rate * units); 
    }

    netAmount = amount + surcharge;

    printf("Customer IDNO: %d\n", customerId);
    printf("Customer name: %s\n", name);
    printf("Units consumed: %d\n", units);
    printf("Amount charges @Rs.%f per unit: %f\n", rate, amount);
    printf("Surcharge amount: %f\n", surcharge);
    printf("Net Amount paid by the customer: %f\n", netAmount);
}