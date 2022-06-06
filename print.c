//
// Created by usrname on 27.05.22.
//

#include "io.h"

int main() {
    FILE* file;
    field* f = create_field();
    file = fopen("DB.bin","rb");
    int count = 1;
    bool st = true;
    fprintf(stdout, "+---+------------+--------+---+-----+------+--------+-----+-------+------+\n");
    fprintf(stdout, "| # |  Surname   |Initials|Sex|Grade|Letter|Medalist|Maths|Physics|Offset|\n");
    while(out_field(f,file) == 0) {
        if(f == NULL) {
            break;
        }
        char* ans1 = (f->medalist == 1) ? "YES" : "NO";
        char* ans2 = (f->medalist == 1) ? "YES" : "NO";

        fprintf(stdout,"+---+------------+--------+---+-----+------+--------+-----+-------+------+\n");
        fprintf(stdout,"|%03d|%-12s|  %s  | %c | %02d  |  %c   |  %-3s   | %03d |  %03d  | %-3s  |\n",count,f->surname,f->name,f->sex,f->grade,f->letter,ans1,f->maths,f->physics,ans2);
        count++;
    }
    fprintf(stdout,"+---+------------+--------+---+-----+------+--------+-----+-------+------+\n");
    fclose(file);
}
