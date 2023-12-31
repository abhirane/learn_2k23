#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int num;

    printf("Enter the  total number of students ");
    scanf("%d", &num);

    struct Student *students = malloc(num * sizeof(struct Student));

    if (students == NULL) {
        printf("failed.\n");
        return 1;
    }

    for (int i = 0; i < num; i++) {
        printf("\nEnter udetails for Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }

    printf("\nStudent Data:\n");

    for (int i = 0; i < num; i++) {
        printf("\nDetails for Student %d:\n", i + 1);

        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
    }

    free(students);

    return 0;
}