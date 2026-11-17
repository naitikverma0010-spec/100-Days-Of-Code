/*
Question 40: Find the 1's complement of a binary number and print it.
*/

#include <stdio.h>

int main()
{
    char s[256];
    scanf("%255s", s);
    for (int i = 0; s[i]; i++)
        putchar((s[i] == '0') ? ('1') : ('0'));

}
