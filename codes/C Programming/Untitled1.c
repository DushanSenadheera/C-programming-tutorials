#include<stdio.h>

void findMax()

{
    int num1,num2,max;

    printf("Enter your number:");
    scanf("%d",&num1);
    printf("Enter your number:");
    scanf("%d",&num2);

    if(num1>num2)
        max=num1;
    else
        max=num2;

    printf("Max number: %d",max);
}

int main()
{
    findMax();
}
