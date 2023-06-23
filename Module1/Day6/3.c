#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int rollno;
    char name[20];
    float marks;
};

void parseInputString(char* input, struct Student* students, int size) {
    char* token = strtok(input, " ");
    int i = 0;
    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strncpy(students[i].name, token, sizeof(students[i].name));
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        token = strtok(NULL, " ");
        i++;
    }
}

void displayStudents(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student ID %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("---------------------\n");
    }
}

int main() {
    int num_students;
    printf("Enter the total number of students ");
    scanf("%d", &num_students);
    getchar();
    struct Student* students = malloc(num_students * sizeof(struct Student));

    printf("Enter the student details\n");
    for (int i = 0; i < num_students; i++) {
        char input[100];
        fgets(input, sizeof(input), stdin);
        parseInputString(input, &students[i], 1);
    }

    printf("\n--- Student Details ---\n");
    displayStudents(students, num_students);

    free(students);

    return 0;
}