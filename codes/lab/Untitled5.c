#include<stdio.h>

void swap(int num1,int num2)
{
    int temp;

    temp=num1;
    num1=num2;
    num2=temp;

    printf("%d and %d",num1,num2);
}

int main()
{
    int a,b;

    printf("Enter your number:");
    scanf("%d",&a);
    printf("Enter your number:");
    scanf("%d",&b);

    swap(a,b);
}
