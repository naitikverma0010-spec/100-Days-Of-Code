/*
Question 121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    int age;
    if (!fgets(name, sizeof(name), stdin))
        return 0;
    name[strcspn(name, "\n")] = 0;
    scanf("%d", &age);
    FILE *f = fopen("info.txt", "w");
    if (!f)
    {
        perror("info.txt");
        return 1;
    }
    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);
    printf("File created successfully! Data written to info.txt");
    return 0;
}
