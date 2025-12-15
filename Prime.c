#include<stdio.h>
int main()
{
 //This is a program that checks of a number is prime or not 
 int number,i=2;
 printf("Enter a number:");
 scanf("%d",&number);
for(i=2;i<number;i++)
{
    if(number%i==0)
    {
        printf("%d is not a prime number\n",number);
        break;
    }
}
printf("%d is a prime number\n",number);
    return 0;
}