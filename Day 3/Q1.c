/*
Question 5: Write a program to convert temperature from Celsius to Fahrenheit.
*/

#include <stdio.h>

int main()
{
    double c;
    scanf("%lf", &c);
    printf("Fahrenheit=%g", ((c * 9) / 5) + 32);
}
