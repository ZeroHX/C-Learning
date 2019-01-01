/*
==================================
Born2DEV : C-programming zero2one
[Section 3] Assignment 10 : โรงเรียนของเด็กชายเอ
==================================
Problem:    ให้ทำโปรแกรมคำนวนเกรดโดย
        ตั้งแต่ 90 ขึ้นไปจะได้เกรด A
        ตั้งแต่ 85 - 89 จะได้เกรด B+
        ตั้งแต่ 80 - 84 จะได้เกรด B
        ตั้งแต่ 75 - 79 จะได้เกรด C+
        ตั้งแต่ 70 - 74 จะได้เกรด C
        ตั้งแต่ 65 - 69 จะได้เกรด D+
        ตั้งแต่ 60 - 64 จะได้เกรด D
        ต่ำกว่า 60 ลงไปจะได้เกรด F

inp: 99
out: A
-----------------------------------
inp: 76
out: C+
-----------------------------------
inp: 59
out: F
*/
#include <stdio.h>
int main(){
    float grade;
    scanf("%f",& grade);
    if(grade >= 90){
        printf("A");
    }
    else if(grade <= 89 && grade >= 85){
        printf("B+");
    }
    else if(grade <= 84 && grade >= 80){
        printf("B");
    }
    else if(grade <= 79 && grade >= 75){
        printf("C+");
    }
    else if(grade <= 74 && grade >= 70){
        printf("C");
    }
    else if(grade <= 69 && grade >= 65){
        printf("D+");
    }
    else if(grade <= 64 && grade >= 60){
        printf("D");
    }
    else if(grade < 60){
        printf("F");
    }
}