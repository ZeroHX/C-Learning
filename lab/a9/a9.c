/*
==================================
Born2DEV : C-programming zero2one
[Section 2] Assignment 9 : ประวัติลูกค้าของลุงสมหมาย
==================================
inp: Sommai
     Sookjai
     89/8 LA
     Male
     0989889988
out: --- Customer Detail ---
     Name : Sommai Sookjai
     Address : 89/8 LA
     Gender : Male
     Tel : 0989889988
*/
#include <stdio.h>
int main(){
    char name[20], last[20], ad[100], gender[20], tel[20];
    scanf("%s",&name);
    scanf("%s",&last);
    scanf("%[^\t\n]s",&ad);
    scanf("%s",&gender);
    scanf("%s",&tel);

    printf("--- Customer Detail ---\n");
    printf("Name : %s %s\n",name,last);
    printf("Address : %s\n",ad);
    printf("Gender : %s\n",gender);
    printf("Tel : %s",tel);
}