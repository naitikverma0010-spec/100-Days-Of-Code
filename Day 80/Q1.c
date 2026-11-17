/*
Question 130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
*/

#include <stdio.h>

typedef struct
{
    char name[100];
    int roll;
    int marks;
} Student;
int main(void)
{
    int n;
    scanf("%d", &n);
    FILE *f = fopen("students.txt", "w");
    if (!f)
        return 1;
    for (int i = 0; i < n; i++)
    {
        Student s;
        scanf("%99s%d%d", s.name, &s.roll, &s.marks);
        fprintf(f, "%s %d %d\n", s.name, s.roll, s.marks);
    }

    fclose(f);
    f = fopen("students.txt", "r");
    if (!f)
        return 1;
    Student s;
    while (fscanf(f, "%99s%d%d", s.name, &s.roll, &s.marks) == 3)
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);

    fclose(f);
    return 0;
}
