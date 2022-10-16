#include<stdio.h>

float Fahrenheit(float temp)
{
    float Fahrenheit;

    Fahrenheit=(temp*9/5)+32;

    return Fahrenheit;
}

int main()
{
    float temp;

    printf("Enter your Celsius value:");
    scanf("%f",&temp);

    printf("Fahrenheit value = %f",Fahrenheit(temp));
}
