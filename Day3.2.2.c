//Q6 (User Inputs, Operations & Output)
//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main()
{
    int a = -1, b = 1, temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d", a, b);

    return 0;
}