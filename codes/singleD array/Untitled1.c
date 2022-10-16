#include<stdio.h>

int main()
{
    int value[10],i,min;

    for(i=0;i<10;i++)
    {
        printf("Enter your number:");
        scanf("%d",&value[10]);
        min=value[10];
        if(value[10]<min)
            min=value[10];
    }
    printf("min : %d",min);
}
