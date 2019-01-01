/*
==================================
Born2DEV : C-programming zero2one
Section3, Lecture26 [Function gradeEX]
==================================
*/
#include <stdio.h>
#include <stdlib.h>

char gradeCalculate(int score){
    char grade;
    if(score >= 80){
        grade = 'A';
    }
    else if(score >= 70 && score <= 79){
        grade = 'B';
    }
    else if(score >= 60 && score <= 69){
        grade = 'C';
    }
    else if(score >= 50 && score <= 59){
        grade = 'D';
    }
    else if(score < 50){
        grade = 'F';
    }
    return grade;
}
int main(void){
    int iscore;
    printf("Enter your score: ");
    scanf("%d",&iscore);
    printf("Your Grade is %c !",gradeCalculate(iscore));
    return 0;
}