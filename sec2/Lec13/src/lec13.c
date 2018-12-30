/*
==================================
Born2DEV : C-programming zero2one
Section3, Lecture13 [I/O]
==================================
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int user = 1234;
	int pass = 1234;
	int username,password;
	printf("Your ID: ");
	scanf("%d",&username);

	printf("Password: ");
	scanf("%d",&password);
	if(username == user && password == pass){
		printf("Correct!!");
	}
	else{
		printf("Wrong Username or Password!!");
	}
}
