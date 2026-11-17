/*
Question 18: Accept a percentage (0-100) and assign grade A/B/C/D/F.
*/

#include <stdio.h>

int main()
{
    int p;
    scanf("%d", &p);
    if ((p < 0) || (p > 100))
        puts("Invalid");
    else
        printf("Grade %c", (p >= 90) ? ('A') : ((p >= 80) ? ('B') : ((p >= 70) ? ('C') : ((p >= 60) ? ('D') : ('F')))));
}
