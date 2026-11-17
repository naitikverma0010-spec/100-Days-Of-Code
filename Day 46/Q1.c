/*
Question 91: Remove all vowels from a string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; i++)
    {
        char c = tolower((unsigned char) s[i]);
        if (!strchr("aeiou", c))
            putchar(s[i]);
    }

}
