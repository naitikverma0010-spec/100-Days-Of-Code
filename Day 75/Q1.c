/*
Question 125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[256];
    char line[1024];
    scanf("%255s", name);
    getchar();
    if (!fgets(line, sizeof(line), stdin))
        return 0;
    FILE *f = fopen(name, "a");
    if (!f)
    {
        perror(name);
        return 1;
    }
    fputs(line, f);
    fclose(f);
    printf("File updated successfully with appended text.");
    return 0;
}
