//
// Created by usrname on 27.05.22.
//

#ifndef CP6_IO_H
#define CP6_IO_H

#include "field.h"

#endif //CP6_IO_H

char* get_string(FILE* file);
char get_char(FILE* file);
int get_int(FILE* file);
void write_string(FILE* file,char* string);
void write_char(FILE* file,char c);
void write_int(FILE* file,int i);
void add_field(FILE* file,field *f);
int read_field(field* f,FILE* file);
int StrRead(char* str,FILE* f);
int CharRead(char* i,FILE* f);
int IntRead(int* i,FILE* f);
int out_field(field* f,FILE* file);