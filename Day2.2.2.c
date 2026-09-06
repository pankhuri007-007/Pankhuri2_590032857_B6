//Q4 (User Inputs, Operations & Output)
//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main()
{
    float radius = 3;
    float area, circumference;

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}