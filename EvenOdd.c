#include<stdio.h>
int main()
{
    // this is a simple program to check if a number is even or odd
    int number;
    printf("Enter an Interger number:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is an Even number\n",number);
    }
    else
    {
        printf("%d is an Odd number\n",number);
    }
    return 0;
}