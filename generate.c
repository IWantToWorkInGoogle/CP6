//
// Created by usrname on 30.05.22.
//
#include "io.h"

int main() {
    FILE* file;
    file = fopen("DB.bin","wb");
    field f1 = {"Muftiev","R.R",'M',11,'B',0,98,80,1};
    add_field(file,&f1);
    field f2 = {"Ivanov","I.I",'M',7,'V',0,65,89,0};
    add_field(file,&f2);
    field f3 = {"Sidorov", "F.I",'M',10,'G',0,45,98,0};
    add_field(file,&f3);
    field f4 = {"Bakanina","M.I",'W',11,'V',1,85,60,1};
    add_field(file,&f4);
    field f5 = {"Kuznetzova","V.S",'W',10,'A',1,100,100,1};
    add_field(file,&f5);
    field f6 = {"Ivanova","P.S",'W',8,'E',0,45,63,1};
    add_field(file,&f6);
    field f7 = {"Baigildin","I.S",'M',11,'D',0,20,15,0};
    add_field(file,&f7);
    field f8 = {"Rubtsov","S.A",'M',11,'A',1,85,96,1};
    add_field(file,&f8);
    field f9 = {"Belousov","E.S",'M',11,'B',1,90,90,1};
    add_field(file,&f9);
    field f10 = {"Hairulina","Y.A",'W',11,'A',1,89,85,1};
    add_field(file,&f10);
    fclose(file);
}
