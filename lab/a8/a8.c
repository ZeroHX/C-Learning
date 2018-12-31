/*
==================================
Born2DEV : C-programming zero2one
[Section 2] Assignment 8 : เรียนรู้ใช้เครื่องหมาย เครื่องหมาย % (Modulus)
==================================
>Problem: find a % b

inp(a,b): 10
          2
out: 0
-----------------------------------
inp(a,b): 7
         3
out: 1
*/
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",a % b);
}