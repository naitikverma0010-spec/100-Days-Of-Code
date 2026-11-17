/*
Question 128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char name[256];
    scanf("%255s", name);
    FILE *f = fopen(name, "r");
    if (!f)
    {
        perror(name);
        return 1;
    }
    int c;
    int v = 0;
    int con = 0;
    while ((c = fgetc(f)) != EOF)
        if (isalpha((unsigned char) c))
    {
        c = tolower((unsigned char) c);
        if (((((c == 'a') || (c == 'e')) || (c == 'i')) || (c == 'o')) || (c == 'u'))
            v++;
        else
            con++;
    }

    fclose(f);
    printf("Vowels: %d\nConsonants: %d", v, con);
    return 0;
}
