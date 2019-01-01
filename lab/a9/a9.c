/*
==================================
Born2DEV : C-programming zero2one
[Section 2] Assignment 9 : ประวัติลูกค้าของลุงสมหมาย//Not finished
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
#include <ctype.h>
int main(){
    char name[100], last[100], ad[100], gender[100], tel[100];
    gets(name);
    gets(last);
    gets(ad);
    gets(gender);
    gets(tel);

    printf("--- Customer Detail ---\n");
    if(name != " "){
        printf("Name : %s",name);
    }
    if(last != "\0"){
        printf(" %s\n", last);
    }
    else if(last == "\0"){
        printf("\n");
    }
    if(ad != "\0"){
        printf("Address : %s\n",ad);
    }
    if(gender != "\0"){
        printf("Gender : %s\n",gender);
    }
    if(tel != "\0"){
        printf("Tel : %s",tel);
    }
}