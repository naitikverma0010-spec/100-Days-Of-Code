/*
Question 99: Change date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int d;
    int m;
    int y;
    scanf("%d/%d/%d", &d, &m, &y);
    char *mon[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    if ((m >= 1) && (m <= 12))
        printf("%02d-%s-%04d", d, mon[m], y);
}
