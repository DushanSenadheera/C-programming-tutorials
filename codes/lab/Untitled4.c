#include<stdio.h>

void largeValue()
{
    int num1,num2;

    printf("Enter your number:");
    scanf("%d",&num1);
    printf("Enter your number:");
    scanf("%d",&num2);

    if(num1>num2)
        printf("%d is the largest number",num1);
    else
        printf("%d is the largest number",num2);
}

int main()
{
    largeValue();
    printf("\n");
    largeValue();
    printf("\n");
    largeValue();
}
