#include<stdio.h>

void volume(float length,float height,float width)
{
    float volume;

    volume=length*width*height;

    printf("Volume = %f",volume);
}

int main()
{
    float a,b,c;

    printf("Enter length value:");
    scanf("%f",&a);
    printf("Enter height value:");
    scanf("%f",&b);
    printf("Enter width value:");
    scanf("%f",&c);

    volume(a,b,c);
}

