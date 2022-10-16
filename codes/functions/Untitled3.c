#include<stdio.h>

float Celsius(float temp)
{
    float celsius;

    celsius=(temp-32)*5/9;

    return celsius;
}

int main()
{
    float temp;

    printf("Enter your Fahrenheit value:");
    scanf("%f",&temp);

    printf("Celsius value = %f",Celsius(temp));
}
