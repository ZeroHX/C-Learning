/*
==================================
Born2DEV : C-programming zero2one
Section3, Lecture25 [Function Return]
==================================
*/
#include <stdio.h>
int salaryCalculate(){
    int money = 12000;
    return money;
}
int main(void){
    printf("Salary : %d",salaryCalculate());
}