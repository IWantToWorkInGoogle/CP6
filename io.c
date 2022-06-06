//
// Created by usrname on 27.05.22.
//

#include "io.h"

void write_string(FILE* file,char* string) {
    fprintf(file,"%s",string);
}

void write_char(FILE* file,char c) {
    fprintf(file,"%c",c);
}

void write_int(FILE* file,int i) {
    fprintf(file,"%d",i);
}

void add_field(FILE* file,field* f) {
    write_string(file,f->surname);
    fprintf(file," ");
    write_string(file,f->name);
    fprintf(file," ");
    write_char(file,f->sex);
    fprintf(file," ");
    write_int(file,f->grade);
    fprintf(file," ");
    write_char(file,f->letter);
    fprintf(file," ");
    write_int(file,f->medalist);
    fprintf(file," ");
    write_int(file,f->maths);
    fprintf(file," ");
    write_int(file,f->physics);
    fprintf(file," ");
    write_int(file,f->offset);
    fprintf(file,"\n");
}

int out_field (field * f, FILE * file) {
    if(fscanf(file,"%s %s %c %d %c %d %d %d %d",f->surname,f->name,&f->sex,&f->grade,&f->letter,&f->medalist,&f->maths,&f->physics,&f->offset) != 9) {
        return 1;
    }
    return 0;
}

