/*
==================================
Born2DEV : C-programming zero2one
Section7, Lecture32 [Pointer]
==================================
*/
#include <stdio.h>
int main(){
    int a = 25;
    int *point_a = &a;
    printf("%p\n", point_a);
    printf("%d", *point_a);
}