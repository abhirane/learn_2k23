#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initialize_toarray(struct Student* ptr, int num_students) {
    for (int i = 0; i < num_students; i++) {
        ptr[i].rollno = i + 1;
        strcpy(ptr[i].name, "Unknown");
        ptr[i].marks = 0.0;
    }
}

int main() {
    int num_students;
    printf("Enter the total number of students  ");
    scanf("%d", &num_students);

    struct Student* students = malloc(num_students * sizeof(struct Student));

    initialize_toarray(students, num_students);

   
    printf("\nStudent Details:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);
    return 0;
}