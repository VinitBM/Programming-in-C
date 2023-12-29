/*1.Write a C Program to display two-dimensional array elements with addresses*/
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
     for( j=i+1;j<n;j++)
     {
     scanf("%d",&num[i][j]);
     }
   }
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
   printf("The Value is %d and the Address is....... %p\n",num[i][j],&num[i][j]);
   }
   return 0;
  }   
