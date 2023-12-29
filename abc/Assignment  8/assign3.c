/*3.Write a program to perform the swap operation */
#include<stdio.h>
void swapping(int c, int d)
 { 

	c=c+d;
	d=c-d;
	c=c-d;
	printf("In function: %d %d\n", c , d); 
}
void main( ) 
{	 int a,b;
	 a=5; b=10;
	 printf("input: %d %d\n", a, b); 
	 swapping(a,b);
}
