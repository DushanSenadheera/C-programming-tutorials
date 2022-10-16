#include <stdio.h>
#include <stdlib.h>
int sum(int marks[])
{
int total=0;
for(int i=0;i<4;i++)
{
total=total+marks[i];
}
return total;
}

float average( int totalmarks)
{
float avg=0;

 avg=(float)totalmarks/4;

 return avg;

}

int main()
{
int Mike[4]={50,86,49,61};
int Mary[4]={70,56,71,51};
int James[4]={40,36,41,81};

 int Mike_sum=sum(Mike);
int Mary_sum=sum(Mary);
int James_sum=sum(James);

 printf("Total of Mike:%d\n",Mike_sum);
printf("Total of Mary:%d\n",Mary_sum);
printf("Total of James:%d\n",James_sum);

 float Mike_avg=average(Mike_sum);
float Mary_avg=average(Mary_sum);
float James_avg=average(James_sum);

 printf("Average of Mike:%.2f\n",Mike_avg);
printf("Average of Mary:%.2f\n",Mary_avg);
printf("Average of James:%.2f\n",James_avg);

 if(Mike_avg>Mary_avg && Mike_avg>James_avg)
{
printf("1st Place goes to Mike");
}
else if(Mary_avg>Mike_avg && Mary_avg>James_avg)
{
printf("1st Place goes to Mary");
}
else
{
printf("1st place goes to James");
}

 return 0;
}
