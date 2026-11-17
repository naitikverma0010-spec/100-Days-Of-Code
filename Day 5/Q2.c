/*
Question 10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/

#include <stdio.h>

int main()
{
    int s;
    scanf("%d", &s);
    printf("%d:%d:%d", s / 3600, (s % 3600) / 60, s % 60);
}
