#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "list.h"

int main() {
    setlocale(LC_ALL, "RUS");

    List* StudentList = InitList();
    StudentList->append(StudentList, InitStudent(23, "Ksenia", "Tfgd", "???", "ghgjf4", 4, 5, 5));
    StudentList->append(StudentList, InitStudent(14, "Vaho", "Tfgd", "???", "ghgjf4", 4, 4, 3));
    StudentList->append(StudentList, InitStudent(17, "Timur", "Tfgd", "???", "ghgjf4", 4, 3, 3));
    StudentList->append(StudentList, InitStudent(13, "Tim", "Ted", "M", "ISP-test", 5, 5, 5));

    // Сохранение списка студентов в файл
    StudentList->save(StudentList, "students.txt");

    // Очистка списка студентов
    StudentList->free(StudentList);

    // Инициализация нового списка студентов
    List* LoadedStudentList = InitList();

    // Загрузка списка студентов из файла
    LoadedStudentList->load(LoadedStudentList, "students.txt");

    // Печать загруженного списка студентов
    LoadedStudentList->print(LoadedStudentList);

    // Очистка загруженного списка студентов
    LoadedStudentList->free(LoadedStudentList);

    return 0;
}
