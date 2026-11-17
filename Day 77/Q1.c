/*
Question 127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *in = fopen("input.txt", "r");
    if (!in)
    {
        perror("input.txt");
        return 1;
    }
    FILE *out = fopen("output.txt", "w");
    if (!out)
    {
        fclose(in);
        perror("output.txt");
        return 1;
    }
    int c;
    while ((c = fgetc(in)) != EOF)
        fputc(toupper((unsigned char) c), out);

    fclose(in);
    fclose(out);
    printf("Converted text written to output.txt");
    return 0;
}
