/*
Question 97: Print the initials of a name.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000];
    fgets(s, sizeof(s), stdin);
    if (isalpha((unsigned char) s[0]))
        printf("%c.", s[0]);
    for (int i = 1; s[i]; i++)
        if ((s[i - 1] == ' ') && isalpha((unsigned char) s[i]))
        printf("%c.", s[i]);

}
