/*Write a C program to sum two 2-D matrices*/
#include<stdio.h>
int main()
{
int a[10][10];
int b[10][10];
int sum[10][10];
  int i,n,m,j;
  printf("Enter the number of rows :=");
  scanf("%d",&n);
  printf("Enter the number of columns :=");
  scanf("%d",&m);
  printf("Enter the Element of First Matrix:=");
  for(i=0;i<n;i++)
   {
     for( j=0;j<m;j++)
     {
     scanf("%d",&a[i][j]);
     }
   }
   printf("Enter the Element of Second Matrix:=");
  for(i=0;i<n;i++)
   {
     for( j=0;j<m;j++)
     {
     scanf("%d",&b[i][j]);
     }
   }
   printf("Sum Of Entered value is=\n");
  for(i=0;i<n;i++)
   {
     for( j=0;j<m;j++)
     {
       sum[i][j]=a[i][j]+b[i][j];
       printf("%d\t",sum[i][j]);
     }
     printf("\n");
   }
   return 0;
 }  
   
