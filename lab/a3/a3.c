/*
==================================
Born2DEV : C-programming zero2one
[Section 2] Assignment 3 : ร้านลุงสมหมาย 2.0
==================================
inp: Somjit
out: Welcome Somjit !
     Sommai 108 Eleven Shop
-----------------------------------
inp: Somrak
out: Welcome Somrak !
     Sommai 108 Eleven Shop
*/
#include <stdio.h>
int main(){
    char str[100];
    gets(str);
    printf("Welcome %s !\n", str);
    printf("Sommai 108 Eleven Shop");
}