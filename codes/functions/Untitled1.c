#include<stdio.h>

int integerPower(int base,int exponent)
{
    int power=1,i;

    for(i=1;i<=exponent;i++)
    {
        power=base*power;
    }

    return power;
}

int main()
{
    int a,b;

    printf("Enter your base value:");
    scanf("%d",&a);
    printf("Enter your exponent value:");
    scanf("%d",&b);

    printf("Value = %d",integerPower(a,b));
}
