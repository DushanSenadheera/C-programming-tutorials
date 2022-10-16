#include<stdio.h>

double hypotenuse(double side1,double side2)
{
    double hypotenuse;

    hypotenuse=(side1*side1)+(side2*side2);

    return hypotenuse;
}

int main()
{
    double a,b;

    printf("Enter your value;");
    scanf("%lf",&a);
    printf("Enter your value;");
    scanf("%lf",&b);

    printf("Hypotenuse = %lf",hypotenuse(a,b));
}
