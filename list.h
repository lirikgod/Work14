#ifndef LIST_H
#define LIST_H

#include "student.h"

typedef struct Node {
    struct Student* student;
    struct Node* next;
} Node;

typedef struct List {
    Node* head;
    Node* tail;
    int size;

    void (*append)(void*, void*);
    void (*printE)(void*);
    void (*printEtwo)(void*);
    void (*print)(void*);
    void (*free)(void*);
    void (*save)(void*, const char*);
    void (*load)(void*, const char*);
} List;

List* InitList();
void* Append(void* list, void* student);
void* PrintExcellentFemaleStudents(void* list);
void* PrintExcellentStudentsWithoutTwos(void* list);
void* PrintList(void* list);
void* FreeList(void* list);
void SaveListToFile(void* list, const char* filename);
void LoadListFromFile(void* list, const char* filename);

#endif /* LIST_H */
