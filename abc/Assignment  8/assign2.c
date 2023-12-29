/*2.Write a C program to declare an integer and an integer pointer to it. Initialize the integer variable. Print the value of the int variable using pointer variable.
Hint: You can use dereferencing operator *.
*/

#include<stdio.h>
int main()
{  
 int i=10;
 int *ptr;
 ptr=&i;
 printf("The Value Of integer i by using pointer variable is = %d\n",*ptr);
 return 0;
 }
 
