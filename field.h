//
// Created by usrname on 25.05.22.
//

#ifndef CP6_PERSON_H
#define CP6_PERSON_H

#endif //CP6_PERSON_H

#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define MAXCHAR 15

typedef struct {
    char* surname;
    char* name;
    char sex;
    int grade;
    char letter;
    int medalist;
    int maths;
    int physics;
    int offset;
} field;

field* create_field();
void delete_field(field* ptr);