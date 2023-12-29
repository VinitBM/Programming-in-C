/*1.Write a C program that declares and initializes (to any value you like) a char, an int, a double and a float. Your program should then print the address of, and value stored in, each of the variables. 
Use the format string "%u" [%p in hex] to print the addresses as unsigned integers. 
Hint: You can use the character “&” to find addresses.
*/

#include<stdio.h>
int main()
{
  int i=10;
  float j=20.08;
  char ch='A';
  double k=20.7865;
  
  int *ptr;
  char *ptr1;
  float *ptr2;
  double *ptr3;
  
  ptr=&i;
  ptr1=&ch;
  ptr2=&j;
  ptr3=&k;
  
  printf("The integer Address is = %u and ptr address is = %p\n",ptr,&ptr);
  printf("The char Address is = %u and ptr1 address is = %p\n",ptr1,&ptr1);
  printf("The float Address is = %u and ptr2 address is = %p\n",ptr2,&ptr2);
  printf("The double Address is = %u and ptr3 address is =%p\n",ptr3,&ptr3);
  return 0;
  }
