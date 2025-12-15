#include <stdio.h>
int main()
{
    int num1,num2,sum;
    printf("enter the fist nuber:");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("The sum of %d and %d is %d\n",num1,num2,sum);
//now lets get the avarage of these two numbers
float average;
average=sum/2.0;
printf("The average of %d and %d is %.2f\n",num1,num2,average);
    return 0;
}