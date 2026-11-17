/*
Question 126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/

#include <stdio.h>

int main(void)
{
    char name[256];
    char line[1024];
    scanf("%255s", name);
    FILE *f = fopen(name, "r");
    if (!f)
    {
        printf("Error: File does not exist!");
        return 0;
    }
    printf("File opened successfully.\n");
    while (fgets(line, sizeof(line), f))
        fputs(line, stdout);

    fclose(f);
    return 0;
}
