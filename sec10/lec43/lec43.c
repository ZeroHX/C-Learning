/*
==================================
Born2DEV : C-programming zero2one
Section10, Lecture43 [Applied String]
==================================
*/
#include <stdio.h>
int main(){
    char name[12], last[20];
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your Last Name: ");
    scanf("%s",&last);

    printf("Message : Hello! Mr.%s %s", name, last);

}