#include<stdio.h>
int main()
{
    // this is a simple program that print from 1 to 10 using while loop
    int start=1;
    printf("Printing numbers from 1 to 10 using while loop:\n");
    while(start<=10)
    {
    printf("%d\n",start);
    start=start+1;
    }
    return 0;
}