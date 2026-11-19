/*
Q145. Return a structure containing top student's details from a function.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTopper(struct Student students[], int n) {
    struct Student top = students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks)
            top = students[i];
    }

    return top;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    struct Student top = findTopper(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}
