/*
==================================
Born2DEV : C-programming zero2one
Section3, Lecture8 [I/O]
==================================
*/
#include <stdio.h>
int main() {
    int inputNumber;
    //setbuf(stdout, NULL);
    printf("Enter your age:\n");
    scanf("%d", &inputNumber);
    printf("Age: %d",inputNumber);
    return 0;
}