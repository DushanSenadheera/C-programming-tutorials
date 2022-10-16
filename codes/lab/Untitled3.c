#include<stdio.h>

void numType(int num)
{
    if(num%2==0)
        printf("Even number");
    else
        printf("Odd number");
}

int main()
{
    int num;

    printf("Enter your number:");
    scanf("%d",&num);

    numType(num);
}
