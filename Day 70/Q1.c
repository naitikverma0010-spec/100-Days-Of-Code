/*
Question 120: Write a program to take a string input. Change it to sentence case.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char s[2000];
    if (!fgets(s, sizeof(s), stdin))
        return 0;
    int newword = 1;
    for (int i = 0; s[i]; i++)
    {
        if (isalpha((unsigned char) s[i]))
        {
            s[i] = (newword) ? (toupper((unsigned char) s[i])) : (tolower((unsigned char) s[i]));
            newword = 0;
        }
        else
            if (isspace((unsigned char) s[i]))
            newword = 1;
    }

    printf("%s", s);
    return 0;
}
