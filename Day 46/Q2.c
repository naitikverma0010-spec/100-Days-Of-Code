/*
Question 92: Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000];
    int f[26] = {0};
    scanf("%999s", s);
    for (int i = 0; s[i]; i++)
    {
        int k = s[i] - 'a';
        if ((k >= 0) && (k < 26))
        {
            if (f[k])
            {
                printf("%c", s[i]);
                return 0;
            }
            f[k] = 1;
        }
    }

    puts("-1");
}
