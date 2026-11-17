/*
Question 115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1000];
    char t[1000];
    scanf("%999s%999s", s, t);
    int f[26] = {0};
    for (int i = 0; s[i]; i++)
        f[s[i] - 'a']++;

    for (int i = 0; t[i]; i++)
        f[t[i] - 'a']--;

    int ok = strlen(s) == strlen(t);
    for (int i = 0; i < 26; i++)
        if (f[i])
        ok = 0;

    printf((ok) ? ("Anagram") : ("Not Anagram"));
    return 0;
}
