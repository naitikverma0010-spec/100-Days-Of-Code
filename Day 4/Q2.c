/*
Question 8: Write a program to find and display the sum of the first n natural numbers.
*/

#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("Sum=%lld", (n * (n + 1)) / 2);
}
