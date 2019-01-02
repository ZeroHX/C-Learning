/*
==================================
Born2DEV : C-programming zero2one
Section9, Lecture38 [Array 2D]
==================================
*/
#include <stdio.h>
int main(){
    int per[10][3];
    for(int i = 0; i < 10; i++){
        per[i][0] = i+1;    //Number
        per[i][1] = 30-i;   //luckynumber 1
        per[i][2] = i+5;    //luckynumber 2
        printf("Number%d: LuckyNumber is %d and %d\n",per[i][0],per[i][1],per[i][2]);
    }

}