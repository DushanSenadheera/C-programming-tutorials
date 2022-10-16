#include<stdio.h>

void total(int num1,int num2)
{
    int total=num1+num2;

    printf("Total = %d",total);
}

int main()
{
    int x,y;

    printf("Enter your number:");
    scanf("%d",&x);
    printf("Enter your number:");
    scanf("%d",&y);

    total(x,y);
}

