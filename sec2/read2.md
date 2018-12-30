# :star: Section 2: If-else

## Sample code
```c
#include <stdio.h>
int main(void) {
	int num = 10;
	int inputNumber;
	scanf("%d",&inputNumber);
	
  if(inputNumber = num){
  	printf("Correct!!");
  }
  else{
	printf("Wrong!!");
  }
}
```
>if <strong>input is 10</strong>  :arrow_right: **output "Correct!!"**<br>
>if **input is not 10**  :arrow_right: **output "Wrong!!"**

**'else if'** check multiple test expression start from *top* if a test expression is **False**(0), it go to next test expression
```c
if (testExpression1) 
{
   // statement(s)
}
else if(testExpression2) 
{
   // statement(s)
}
else if (testExpression 3) 
{
   // statement(s)
}
.
.
else 
{
   // statement(s)
}
```
[To lecture...(code in src)](https://github.com/ZeroHX/C-Learning/tree/master/sec2)
