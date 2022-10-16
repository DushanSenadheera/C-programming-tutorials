#include<stdio.h>

 void cal(int num1,int num2,int num3)
 {
     int sum,dif,pro;

     printf("Enter your number:");
     scanf("%d",&num1);
     printf("Enter your number:");
     scanf("%d",&num2);
     printf("Enter your number:");
     scanf("%d",&num3);

     sum=num1+num2+num3;
     dif=num1-num2-num3;
     pro=num1*num2*num3;

     printf("Summation = %d",sum);
     printf("\nDifference = %d",dif);
     printf("\nProduct = %d\n",pro);
 }

 int main()
 {
   int x,y,z;

   cal(x,y,z);
 }
