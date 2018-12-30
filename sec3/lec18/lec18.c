/*
==================================
Born2DEV : C-programming zero2one
Section3, Lecture18 [Loop Nested]
==================================
*/

//Print Loop i(10), Loop x(5)
#include <stdio.h>
int main(void){
    int i = 0;
    while(i<10)
    {
        for(int x = 0; x < 5; x++)
        {
            printf("x = %d\n", x);
        }
        printf("i = %d\n", i);
        i++;
    }
}