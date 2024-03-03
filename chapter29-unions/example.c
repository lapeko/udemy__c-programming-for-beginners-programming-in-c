#include <stdio.h>
#include <stdlib.h>

typedef union {
    int id;
    double average;
} Student;

int main() {
    Student* s_ptr;
    s_ptr = (Student*)malloc(sizeof(Student));

    s_ptr->id = 123;
    printf("Student id: %d\n", s_ptr->id);
    printf("Student average: %lf\n", s_ptr->average);

    s_ptr->average = 55.4;
    printf("Student id: %d\n", s_ptr->id);
    printf("Student average: %lf\n", s_ptr->average);

    free(s_ptr);

    return 0;
}