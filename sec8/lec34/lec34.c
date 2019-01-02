/*
==================================
Born2DEV : C-programming zero2one
Section8, Lecture34 [Struct]
==================================
*/
#include <stdio.h>
struct test {
    int a;
    int b;
    float c;
};
int main(void){
    struct test testVar;
    testVar.a = 150;
    testVar.b = 300;
    printf("%d",testVar.a);

}