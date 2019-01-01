/*
==================================
Born2DEV : C-programming zero2one
Section6, Lecture29 [Switch case]
==================================
*/
#include <stdio.h>
int main(){
    int i;
    printf("Enter your number: ");
    scanf("%d",& i);
    switch(i){
        case 1 :
            printf("Hello 1");
            break;
        case 2 :
            for(int x = 0; x < 10; x++){
                printf("Yolo %d\n",x);
            }
            break;
        default :
            printf("Wrong");
    }
}