//Q2 (User Inputs, Operations & Output)

//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    int a = 10, b = 2;
    int sum, diff, product, quotient;

    sum = a + b;
    diff = a - b;
    product = a * b;

    if (b != 0)
    {
        quotient = a / b;
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", sum, diff, product, quotient);
    }
    else
    {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=Division by zero", sum, diff, product);
    }

    return 0;
}