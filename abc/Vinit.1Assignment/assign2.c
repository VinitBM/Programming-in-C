/*2.Write a C program to copy the elements of one 2-D array to another 2-D array.*/
#include<stdio.h>
int main()
{
int a[100][100];
int b[100][100];
  int i,n,m,j;
  printf("Enter the number of rows :=\n");
  scanf("%d",&n);
  printf("Enter the number of columns :=\n");
  scanf("%d",&m);
  printf("Enter the Array Element:=\n");
  for(i=0;i<n;i++)
   {
     for( j=0;j<m;j++)
     {
     scanf("%d",&a[i][j]);
     }
   }
    for(i=0;i<n;i++)
   {
     for( j=0;j<m;j++)
     {
       b[i][j]=a[i][j];
     }
    }
     for(i=0;i<n;i++)
   {
     for( j=0;j<m;j++)
     {
       printf("After Copying the value answer is =[%d]\n",b[i][j]);
     }
   }
  return 0;
 }        
