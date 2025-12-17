#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("Enter the fisrt number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    //swapping logic
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapping, first number=%d\n",num1);
    printf("After swapping, second number=%d\n",num2);
    return 0;
}