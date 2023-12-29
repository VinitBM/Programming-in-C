/*2.	Write a C program to demonstrate double pointer.
(Practice all double pointer programs covered in class ppt)
*/
#include<stdio.h>
int
main (void)
{
  int  i= 10;
  int *ptr = NULL;
  int **dptr = NULL;
  ptr = &i;
  dptr = &ptr;
  printf ("\n i = [%d]\n", i);
  printf ("\n *ptr = [%d]\n", *ptr);
  printf ("\n **dptr = [%d]\n", **dptr);
  printf("********************************");
  printf ("\n i = [%d]\n", i);
  *ptr = 20;
  printf ("\n i = [%d]\n", i);
  **dptr = 30;
  printf ("\n i = [%d]\n", i);
  return 0;
}

