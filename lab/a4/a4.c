/*
==================================
Born2DEV : C-programming zero2one
[Section 2] Assignment 4 : บวก ลบ คูณ หาร เรื่องกล้วยๆ
==================================
inp: 10
     2
out: 10 + 2 = 12
     10 - 2 = 8
     10 * 2 = 20
     10 / 2 = 5
-----------------------------------
inp: 100
     2
out: 100 + 2 = 102
     100 - 2 = 98
     100 * 2 = 200
     100 / 2 = 50
*/
#include <stdio.h>
int main(){
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d / %d = %d",num1,num2,num1/num2);
}