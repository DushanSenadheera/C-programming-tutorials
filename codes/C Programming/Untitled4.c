#include<stdio.h>

char character()
{
    char character;

    printf("Enter any character:");
    scanf("%c",&character);
    return character;
}

int main()
{
    printf("Entered character is %c",character());
}
