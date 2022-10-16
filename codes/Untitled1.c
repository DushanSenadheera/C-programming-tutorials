#include<stdio.h>

int main()
{
    int A[4]={15,23,8,9},i=0;
    int B[4]={12,5,32,4};
    int C[4]={3,18,1,28};
    int sum[4],even[2];

    printf("Array A values\n");
    for(i=0;i<4;i++)
    {
        printf("%d ",A[i]);
    }


    printf("\nArray B values\n");
    for(i=0;i<4;i++)
    {
        printf("%d ",B[i]);
    }


    printf("\nArray C values\n");
    for(i=0;i<4;i++)
    {
        printf("%d ",C[i]);
    }


    printf("\nVector sum\n");
    for(i=0;i<4;i++)
    {
        sum[i]=A[i]+B[i]+C[i];
        printf("%d ",sum[i]);
    }

    printf("\nEven numbers\n");
    for(i=0;i<4;i++)
    {
        if(sum[i]%2==0)
        {
            even[i]=sum[i];
            printf("%d ",even[i]);
        }
    }
}
