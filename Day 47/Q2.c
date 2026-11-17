/*
Question 94: Find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000];
    fgets(s, sizeof(s), stdin);
    char *p = strtok(s, " \n");
    char *best = p;
    while (p)
    {
        if (strlen(p) > strlen(best))
            best = p;
        p = strtok(NULL, " \n");
    }

    if (best)
        puts(best);
}
