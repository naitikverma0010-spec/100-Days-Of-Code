/*
Question 123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
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
    long chars = 0;
    long words = 0;
    long lines = 0;
    int c;
    int inword = 0;
    int last = '\n';
    while ((c = fgetc(f)) != EOF)
    {
        chars++;
        if (c == '\n')
            lines++;
        if (isspace(c))
            inword = 0;
        else
            if (!inword)
        {
            words++;
            inword = 1;
        }
        last = c;
    }

    if ((chars > 0) && (last != '\n'))
        lines++;
    fclose(f);
    printf("Characters: %ld\nWords: %ld\nLines: %ld", chars, words, lines);
    return 0;
}
