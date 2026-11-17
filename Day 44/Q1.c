/*
Question 87: Count spaces, digits, and special characters in a string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int sp = 0;
    int d = 0;
    int x = 0;
    for (int i = 0; s[i] && (s[i] != '\n'); i++)
    {
        if (s[i] == ' ')
            sp++;
        else
            if (isdigit((unsigned char) s[i]))
            d++;
        else
            if (!isalpha((unsigned char) s[i]))
            x++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", sp, d, x);
}
