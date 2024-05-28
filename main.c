#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "list.h"

int main() {
    setlocale(LC_ALL, "RUS");

    List* StudentList = InitList();
    StudentList->append(StudentList, InitStudent(23, "Ksenia", "Tfgd", "female", "ghgjf4", 4, 5, 5));
    StudentList->append(StudentList, InitStudent(14, "Vaho", "Tfgd", "male", "ghgjf4", 4, 4, 3));
    StudentList->append(StudentList, InitStudent(17, "Timur", "Tfgd", "male", "ghgjf4", 4, 3, 3));
    StudentList->append(StudentList, InitStudent(13, "Tim", "Ted", "male", "ISP-test", 5, 5, 5));

    // Сохранение списка студентов в текстовый файл
    StudentList->save(StudentList, "students.txt");

    // Загрузка списка студентов из текстового файла
    List* LoadedStudentList = InitList();
    LoadedStudentList->load(LoadedStudentList, "students.txt");
    LoadedStudentList->print(LoadedStudentList);
    LoadedStudentList->free(LoadedStudentList);

    // Сохранение списка студентов в бинарный файл
    StudentList->saveBinary(StudentList, "students.bin");

    // Загрузка списка студентов из бинарного файла
    List* LoadedStudentListBinary = InitList();
    LoadedStudentListBinary->loadBinary(LoadedStudentListBinary, "students.bin");
    LoadedStudentListBinary->print(LoadedStudentListBinary);
    LoadedStudentListBinary->free(LoadedStudentListBinary);

    // Очистка исходного списка студентов
    StudentList->free(StudentList);

    return 0;
}
