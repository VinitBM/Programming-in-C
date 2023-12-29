/*2.Write a C program to print all elements of two dimensional array using pointers.*/
#include<stdio.h>
int main()
{
int num[100][100];
  int i,n,j;
  printf("Enter the number:=\n");
  scanf("%d",&n);
  printf("Enter the Array Element:=\n");
  for(i=0;i<n;i++)
   {
     for( j=0;j<n;j++)
     {
       scanf("%d",&num[i][j]);
     }
   }
     for(i=0;i<n;i++)
   {
     for( j=0;j<n;j++)
     {
      printf("Array elements are =[%d]\n",*(*(num+i)+j));
     }
   }
   return 0;
 }  
