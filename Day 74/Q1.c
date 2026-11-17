/*
Question 124: Take two filenames from the user - a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main(void)
{
    char src[256];
    char dst[256];
    scanf("%255s%255s", src, dst);
    FILE *a = fopen(src, "r");
    if (!a)
    {
        perror(src);
        return 1;
    }
    FILE *b = fopen(dst, "w");
    if (!b)
    {
        perror(dst);
        fclose(a);
        return 1;
    }
    int c;
    while ((c = fgetc(a)) != EOF)
        fputc(c, b);

    fclose(a);
    fclose(b);
    printf("File copied successfully to %s", dst);
    return 0;
}
