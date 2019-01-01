/*
==================================
Born2DEV : C-programming zero2one
[Section 3] Assignment 13 : ต่ำกว่า 18 ห้ามเข้า
==================================
Problem: เช็คอายุถ้าตํ่ากว่า 18 ปี(>1997) ห้ามเข้า **ยกเว้น ด.ช.เอ เอ(A A) เข้าได้เลย**

inp: Sommai MeeMakMai
     1950
out: Welcome Sommai MeeMakMai to NongGipsy Pub
-----------------------------------
inp: Therasak Pra
     2006
out: You shall not pass!
*/
#include <stdio.h>
#include <string.h> //Use strcmp(a,b) to compare name
int main(){
    char name[100];
    int year;
    gets(name);
    if(strcmp(name,"A A") == 0){
        printf("Welcome %s to NongGipsy Pub",name);
    }
    else{
        scanf("%d",& year);
        if(2015 - year >= 18){
        printf("Welcome %s to NongGipsy Pub",name);
        }
        else{
        printf("You shall not pass!");
        }
    }

}