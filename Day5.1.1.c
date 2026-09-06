//Q9 (User Inputs, Operations & Output)
//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main()
{
    float principal = 1000, rate = 5, time = 2;
    float simpleInterest, compoundInterest;

    simpleInterest = (principal * rate * time) / 100;

    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest=%.0f, Compound Interest=%.2f",
           simpleInterest, compoundInterest);

    return 0;
}
