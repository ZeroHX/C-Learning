/*
==================================
Born2DEV : C-programming zero2one
Section3, Lecture16 [Do-While Loop]
==================================
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int id;
    int pass;
    do{
        printf("ID: ");
        scanf("%d",&id);
        printf("Password: ");
        scanf("%d",&pass);
    }while(id != 1234 || pass != 4321);
    printf("Login Success!!");
    return 0;
}