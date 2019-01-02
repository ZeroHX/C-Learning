/*
==================================
Born2DEV : C-programming zero2one
Section8, Lecture35 [Struct Employee]
==================================
*/
#include <stdio.h>

struct employee{
    int id;
    int age;
    float salary;
    int isMale; //1 == YES 0 == NO
};

int main(){
    struct employee emp1;
    emp1.id = 1;
    emp1.age = 30;
    emp1.salary = 13000;
    emp1.isMale = 0;

    struct employee emp2;
    emp2.id = 2;
    emp2.age = 28;
    emp2.salary = 12000;
    emp2.isMale = 1;

    printf("ID:%d, AGE:%d, SALARY:%.2f\n",emp1.id,emp1.age,emp1.salary);
    printf("ID:%d, AGE:%d, SALARY:%.2f",emp2.id,emp2.age,emp2.salary);

}