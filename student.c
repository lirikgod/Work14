#include <stdlib.h>
#include <string.h>
#include "student.h"

Student* InitStudent(int age, char* name, char* surname, char* gender, char* group, int mathGrade, int physicGrade, int chemistryGrade) {
    Student* student = malloc(sizeof(Student));
    student->name = strdup(name);
    student->surname = strdup(surname);
    student->gender = strdup(gender);
    student->group = strdup(group);
    student->mathGrade = mathGrade;
    student->physicGrade = physicGrade;
    student->chemistryGrade = chemistryGrade;
    student->age = age;
    return student;
}
