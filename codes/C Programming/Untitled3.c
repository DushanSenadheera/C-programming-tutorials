#include<stdio.h>

void average(float num1,float num2)
{
    float total,average;

    total=num1+num2;
    average=total/2;

    printf("Average = %f",average);
}

int main()
{
    float x,y,sum,avg;

    printf("Enter your number:");
    scanf("%f",&x);
    printf("Enter your number:");
    scanf("%f",&y);

    average(x,y);
}
