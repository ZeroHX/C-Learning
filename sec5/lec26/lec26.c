/*
==================================
Born2DEV : C-programming zero2one
Section3, Lecture26 [Function Argument]
==================================
*/
#include <stdio.h>
int salaryCalculate(){
    int money = 12000;
    return money;
}
float bonusCalculate(int salary){
    float ans = salary+(salary*10/100);
    return ans;
}
int main(void){
    printf("%f", bonusCalculate(salaryCalculate()));
}