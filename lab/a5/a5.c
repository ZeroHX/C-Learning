/*
==================================
Born2DEV : C-programming zero2one
[Section 2] Assignment 5 : ฟิสิกส์ง่ายนิดเดียว
==================================
>Problem: [v = s/t] find v
inp(s,t): 120
          10
out: 12 km/h
-----------------------------------
inp(s,t): 360
          1
out: 360 km/h
*/
#include <stdio.h>
int main(){
    int s;
    int t;
    scanf("%d",&s);
    scanf("%d",&t);
    printf("%d km/h",s/t);
}