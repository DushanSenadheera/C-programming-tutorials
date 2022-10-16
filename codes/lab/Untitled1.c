#include<stdio.h>

void cal()
{
    int num1,num2,num3,sum,dif;

    printf("Enter your number:");
    scanf("%d",&num1);
    printf("Enter your number:");
    scanf("%d",&num2);
    printf("Enter your number:");
    scanf("%d",&num3);

    sum=num1+num2+num3;
    dif=num1-num2-num3;

    printf("Sumation = %d",sum);
    printf("\nDifference = %d\n",dif);
}

int main()
{
    cal();
}
