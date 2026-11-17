/*
Question 13: Write a program to input a year and check whether it is a leap year or not.
*/

#include <stdio.h>

int main()
{
    int y;
    scanf("%d", &y);
    puts((((y % 400) == 0) || (((y % 4) == 0) && ((y % 100) != 0))) ? ("Leap year") : ("Not a leap year"));
}
