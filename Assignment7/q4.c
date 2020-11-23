#include <stdio.h>

int Prime(int num);
int Armstrong(int num);
int Perfect(int num);

int Prime(int num)
{
    for(int i=2; i<num; i++)
    {
        if (num%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int Armstrong(int num)
{
    int sum=0;
    while (num > 0)
    {
        sum += num%10;
        num = num/10;
    }
}

int Perfect(int num)
{
}

int main()
{
    

    return 0;
}
