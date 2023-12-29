/*5.Write a C Program to display three-dimensional array elements with addresses*/
#include<stdio.h>
int main()
{
  int num[100][100][100];
  int i,n,j,k;
  printf("Enter the number:=\n");
  scanf("%d",&n);
  printf("Enter the Array Element:=\n");
  for(i=0;i<n;i++)
   {
     for( j=0;j<n;j++)
     {
       for( k=0;k<n;k++)
       {
         scanf("%d",&num[i][j][k]);
       }
    }
   } 
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
        for( k=0;k<n;k++)
        {
        
   printf("The Value is %d and the Address is....... %p\n",num[i][j][k],&num[i][j][k]);
        }
     }  
   }
   return 0;
  }   
