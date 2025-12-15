#include <stdio.h>
int main()
{
    //This program will get the user's name and age, then print them to the console
    char name[100];
    int age;
    printf("Enter your name: ");
    scanf("%99s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Hello, %s! You are %d years old.\n", name, age);
    return 0;
}