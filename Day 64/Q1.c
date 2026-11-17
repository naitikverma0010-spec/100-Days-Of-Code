/*
Question 114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[2000];
    if (!fgets(s, sizeof(s), stdin))
        return 0;
    s[strcspn(s, "\n")] = 0;
    int last[256];
    for (int i = 0; i < 256; i++)
        last[i] = -1;

    int start = 0;
    int best = 0;
    for (int i = 0; s[i]; i++)
    {
        unsigned char c = s[i];
        if (last[c] >= start)
            start = last[c] + 1;
        last[c] = i;
        if (((i - start) + 1) > best)
            best = (i - start) + 1;
    }

    printf("%d", best);
    return 0;
}
