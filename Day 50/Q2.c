/*
Question 100: Print all substrings of a string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[500];
    scanf("%499s", s);
    int n = strlen(s);
    int first = 1;
    for (int i = 0; i < n; i++)
        for (int l = 1; (i + l) <= n; l++)
    {
        if (!first)
            putchar(',');
        first = 0;
        for (int j = i; j < (i + l); j++)
            putchar(s[j]);

    }

}
