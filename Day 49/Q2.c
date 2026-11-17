/*
Question 98: Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000];
    char *w[50];
    fgets(s, sizeof(s), stdin);
    int n = 0;
    for (char *p = strtok(s, " \n"); p; p = strtok(NULL, " \n"))
        w[n++] = p;

    for (int i = 0; i < (n - 1); i++)
        printf("%c.", w[i][0]);

    if (n)
        printf(" %s", w[n - 1]);
}
