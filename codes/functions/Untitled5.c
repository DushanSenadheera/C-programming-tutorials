#include<stdio.h>

float Fahrenheit(float i)
{
    float Fahrenheit;

    Fahrenheit=(i*9/5)+32;

    return Fahrenheit;
}

float Celsius(float j)
{
    float celsius;

    celsius=(j-32)*5/9;

    return celsius;
}

int main()
{
    int i,j;

    printf("---0 to 100 values for Celsius to Fahrenheit---\n");
    for(i=0;i<=100;i++)
    {
        printf("%d = %f\n",i,Fahrenheit(i));
    }

    printf("\n--- 32 to 212 values for Fahrenheit to Celsius---\n");

    for(j=32;j<=212;j++)
    {
        printf("%d = %f\n",j,Celsius(j));
    }
}

