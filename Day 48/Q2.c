/*
Question 96: Reverse each word in a sentence without changing word order.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int n = strlen(s);
    int start = 0;
    for (int i = 0; i <= n; i++)
        if (((s[i] == ' ') || (s[i] == '\n')) || (s[i] == 0))
    {
        for (int j = i - 1; j >= start; j--)
            putchar(s[j]);

        if (s[i])
            putchar(s[i]);
        start = i + 1;
    }

}
