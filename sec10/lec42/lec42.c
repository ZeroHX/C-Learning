/*
==================================
Born2DEV : C-programming zero2one
Section10, Lecture42 [String Library]
==================================
*/
#include <stdio.h>
#include <string.h>
int main(void){
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];

    //strcpy(a,b) is string copy func. from b to a
    strcpy(str3, str1);
    printf("strcpy(str3, str1) : %s\n", str3);  //strcpy(str3, str1) : Hello

    //strcat(a,b) is concatenates(joins) two strings like ab
    strcat(str1, str2);
    printf("strcat(str1, str2): %s\n", str1);   //strcat(str1, str2): HelloWorld

    //strlen(a) is the length of a given string calculates func.
    int len = strlen(str1); //HelloWorld
    printf("int len = strlen(str1): %d", len);  //int len = strlen(str1): 10
}