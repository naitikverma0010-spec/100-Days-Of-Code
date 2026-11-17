/*
Question 20: Display the day of the week based on a number (1-7) using switch-case.
*/

#include <stdio.h>

int main()
{
    int n;
    char *d[] = {"", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    scanf("%d", &n);
    if ((n >= 1) && (n <= 7))
        puts(d[n]);
    else
        puts("Invalid");
}
