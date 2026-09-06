// Q3 (User Inputs, Operations & Output)
//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

#include <stdio.h>

int main()
{
    int length = 5, breadth = 10;
    int area, perimeter;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d", area, perimeter);

    return 0;
}