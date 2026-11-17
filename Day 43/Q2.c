/*
Question 86: Check if a string is a palindrome.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int n = strcspn(s, "\n");
    int ok = 1;
    for (int i = 0; i < (n / 2); i++)
        if (s[i] != s[(n - 1) - i])
        ok = 0;

    puts((ok) ? ("Palindrome") : ("Not palindrome"));
}
