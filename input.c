//
// Created by usrname on 27.05.22.
//

#include "io.h"

int main() {
    system("clear");
    FILE* file;
    field* f = create_field();
    file = fopen("DB.bin","ab");
    char garbage;
    bool inputDo = true;
    while(inputDo) {
        fprintf(stdout,"Add new field?(YES/NO)\n");
        char* ans = (char*)malloc(sizeof(char));
        fscanf(stdin,"%s",ans);
        if(!strcmp("YES",ans)) {
            fprintf(stdout,"Surname: ");
            fscanf(stdin, "%s", f->surname);
            fprintf(stdout,"Name: ");
            fscanf(stdin, "%s", f->name);
            fprintf(stdout,"Sex: ");
            //fscanf(stdin,"%c",&garbage);
            fscanf(stdin,"%c",&f->sex);
            fprintf(stdout,"Grade: ");
            fscanf(stdin,"%d",&f->grade);
            fprintf(stdout,"Letter: ");
            fscanf(stdin,"%c",&garbage);
            fscanf(stdin,"%c",&f->letter);
            fprintf(stdout,"Medalist: ");
            fscanf(stdin,"%d",&f->medalist);
            fprintf(stdout,"Maths: ");
            fscanf(stdin,"%d",&f->maths);
            fprintf(stdout,"Physics: ");
            fscanf(stdin,"%d",&f->physics);
            fprintf(stdout,"Offset: ");
            fscanf(stdin,"%d",&f->offset);
            add_field(file,f);
        } else if(!strcmp("NO",ans)){
            break;
        } else {
            fprintf(stdout,"Invalid value!\n");
        }
        fprintf(stdout,"Print something to continue: ");
        fscanf(stdin,"%s",ans);
        system("clear");
    }
    fclose(file);
    return 0;
}
