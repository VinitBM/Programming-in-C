/*4.Write a swap function and use call by reference.*/
#include<stdio.h>
void swapping(int *ptr_c, int *ptr_d) 
{ 	 int tmp; 
	tmp = *ptr_c; 
	*ptr_c = *ptr_d;
	 *ptr_d = tmp; 
	printf("In function: %d %d\n", *ptr_c , *ptr_d);  } 
void  main( ) 
{ 
	int a=5,b=10;                                 
	printf("input: %d %d\n", a, b); 
	swapping(&a,&b); 
}
