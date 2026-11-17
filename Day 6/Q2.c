/*
Question 12: Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.
*/

#include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);
    puts((x > 0) ? ("Positive") : ((x < 0) ? ("Negative") : ("Zero")));
}
