#include<stdio.h>

int smallValue(int num1,int num2,int num3)
{
    int smallvalue;

    if(num1<num2 && num1<num3)
        smallvalue=num1;
    else if(num2<num1 && num3>num2)
        smallvalue=num2;
    else
        smallvalue=num3;

    return smallvalue;
}

int main()
{
    int x,y,z;

    printf("Enter your value:");
    scanf("%d",&x);
    printf("Enter your value:");
    scanf("%d",&y);
    printf("Enter your value:");
    scanf("%d",&z);

    printf("Small value = %d",smallValue(x,y,z));
}
