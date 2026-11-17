/*
Question 95: Check if one string is a rotation of another.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[500];
    char b[500];
    char t[1000];
    scanf("%499s%499s", a, b);
    if (strlen(a) != strlen(b))
    {
        puts("Not rotation");
        return 0;
    }
    strcpy(t, a);
    strcat(t, a);
    puts((strstr(t, b)) ? ("Rotation") : ("Not rotation"));
}
