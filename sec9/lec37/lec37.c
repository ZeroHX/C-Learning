/*
==================================
Born2DEV : C-programming zero2one
Section9, Lecture37 [Array 1D]
==================================
*/
#include <stdio.h>
int main(){
    int score[100];
    for(int i = 0; i < 100; i++){
        score[i] = 100-i;
        printf("Score %d : %d\n",i+1,score[i]);
    }

}