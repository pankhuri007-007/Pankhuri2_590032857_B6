
//Q7 (User Inputs, Operations & Output)
//Write a program to swap two numbers without using a third variable.
 
#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d", a, b);

    return 0;
}