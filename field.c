//
// Created by usrname on 25.05.22.
//

#include "field.h"

field* create_field() {
    field* ptr = (field*)malloc(sizeof(field));
    ptr->surname = (char*)malloc(sizeof(char));
    ptr->name = (char*)malloc(sizeof(char));
    ptr->sex = 0;
    ptr->grade = 0;
    ptr->letter = 0;
    ptr->medalist = 0;
    ptr->maths = 0;
    ptr->physics = 0;
    ptr->offset = 0;
    return ptr;
}

void delete_field(field* ptr) {
    free(ptr->surname);
    free(ptr->name);
    ptr->sex = 0;
    ptr->grade = 0;
    ptr->letter = 0;
    ptr->medalist = 0;
    ptr->maths = 0;
    ptr->physics = 0;
    ptr->offset = 0;
    free(ptr);
}
