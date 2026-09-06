//Q10 (User Inputs, Operations & Output)
//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main()
{
    int seconds = 7322;
    int hours, minutes, sec;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    sec = seconds % 60;

    printf("%d:%d:%d", hours, minutes, sec);

    return 0;
}