/*
==================================
Born2DEV : C-programming zero2one
[Section 2] Assignment 6 : เกรดเฉลี่ยมันเป็นเพียงแค่ตัวเลข
==================================
>Problem: มีเกรดวิชาทั้งหมดของเทอมนี้อยู่ 5 ตัว มี ภาษาไทย(THAI), คณิตศาสตร์(MATH),
        ภาษาอังกฤษ(ENGLISH), วิทยาศาสตร์(SCIENCE) และ พละศึกษา(SPORT) ให้หาเกรดเฉลี่ย(GPA)

inp: 3.5
     2.0
     4.0
     2.0
     2.5
out: THAI = 3.5
     MATH = 2.0
     ENGLISH = 4.0
     SCIENCE = 2.0
     SPORT = 2.5
     ---
     GPA = 2.8
*/
#include <stdio.h>
int main(){
    float th, math, eng, sci, sport;
    scanf("%f",& th);
    scanf("%f",& math);
    scanf("%f",& eng);
    scanf("%f",& sci);
    scanf("%f",& sport);

    printf("THAI = %.1f\n",th);
    printf("MATH = %.1f\n",math);
    printf("ENGLISH = %.1f\n",eng);
    printf("SCIENCE = %.1f\n",sci);
    printf("SPORT = %.1f\n",sport);
    printf("---\n");
    printf("GPA = %.1f",(th+math+eng+sci+sport)/5);
}