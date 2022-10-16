#include <stdio.h>
#include <stdlib.h>

int oddeven(int n1)
{
if(n1%2==0)
{
return 1;
}
else
{
return 0;
}
}

int main()
{
int number[5];

 for(int i=0;i<5;i++)
{
printf("Enter a value");
scanf("%d",&number[i]);
}

for(int j=0;j<5;j++)
{
if(oddeven(number[j])==1)
{
printf("Even\n");
}

 if(oddeven(number[j])==0)
{

 printf("ODD\n");
}

 }

return 0;
}
