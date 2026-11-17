/*
Question 93: Check if two strings are anagrams of each other.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[1000];
    char b[1000];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    int f[256] = {0};
    for (int i = 0; a[i] && (a[i] != '\n'); i++)
        f[(unsigned char) a[i]]++;

    for (int i = 0; b[i] && (b[i] != '\n'); i++)
        f[(unsigned char) b[i]]--;

    for (int i = 0; i < 256; i++)
        if (f[i])
    {
        puts("Not anagrams");
        return 0;
    }

    puts("Anagrams");
}
