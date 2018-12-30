/*
==================================
Born2DEV : C-programming zero2one
Section3, Lecture19 [Break Loop]
==================================
*/

//Print round(10) of loop while(i) and BREAK when inputnumber(num) = 0
#include <stdio.h>
int main(void){
    int i = 0;
    while(i<10)
    {
        printf("i = %d\n", i);
        i++;
        int num;
        printf("Enter number: ");
        scanf("%d",& num);
        if(num == 0){
            break;
        }
    }
    printf("Done!!");
}