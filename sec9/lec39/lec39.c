/*
==================================
Born2DEV : C-programming zero2one
Section9, Lecture39 [Array+Struct]
==================================
*/
#include <stdio.h>

struct employee{
    int id;
    int age;
    float salary;
};
int main(){
    struct employee emp[10];

    //store data
    for(int i=0; i<10; i++){
        emp[i].id = 100+i;
        emp[i].age = 18+i;
        emp[i].salary = 12000+(1000.25*i);
    }
    //show database
    for(int i=0; i<10; i++){
        printf("ID:%d AGE:%d SAL:%.2f\n",emp[i].id,emp[i].age,emp[i].salary);
    }
}