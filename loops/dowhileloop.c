#include<stdio.h>
int main()
{
    int start=1;
    printf("Printing numbers from 1 to 10 using do-while loop:\n");
    do
    {
        printf("%d\n",start);
        start++;
    } while (start<=10);
}