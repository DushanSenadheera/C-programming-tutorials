#include<stdio.h>

void area(float base,float height)
{
    float area;

    area=0.5*base*height;

    printf("Area = %f",area);
}

int main()
{
    float a,b;

    printf("Enter base value:");
    scanf("%f",&a);
    printf("Enter height value:");
    scanf("%f",&b);

    area(a,b);
}
