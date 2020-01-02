#ifndef e_struct_h
#define e_struct_h

struct employee {
    char name[100];
    int number;
    int salary;
}e[10];

int count = 0;

enum op{Add=1,Remove=2, Update=3, Exit=4};


#endif

