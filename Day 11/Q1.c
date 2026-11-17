/*
Question 21: Display month name and number of days using switch-case.
*/

#include <stdio.h>

int main()
{
    int m;
    char *n[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int d[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d", &m);
    if ((m >= 1) && (m <= 12))
        printf("%s, %d days", n[m], d[m]);
    else
        puts("Invalid");
}
