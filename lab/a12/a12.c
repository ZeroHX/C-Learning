/*
==================================
Born2DEV : C-programming zero2one
[Section 3] Assignment 12 : มากกว่า หรือ น้อยกว่า ?
==================================
Problem: ให้จำนวนเต็ม 2 จำนวน หาว่าตัวไหนมากกว่ากัน?
inp: 80
     90
out: MAX : 90
     MIN : 80
-----------------------------------
inp: 90
     100
out: MAX : 100
     MIN : 90
*/
#include <stdio.h>
int main(){
    int num1, num2;
    scanf("%d%d",&num1,&num2);

    if(num1 > num2){
        printf("MAX : %d\n",num1);
        printf("MIN : %d",num2);
    }
    else{
        printf("MAX : %d\n",num2);
        printf("MIN : %d",num1);
    }
}