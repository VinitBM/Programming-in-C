/*1.C program to search element in array (1-D)using pointers*/
#include<stdio.h>
int i,b;
int search(int,int *,int);
int main()
{
  int n, m;
  printf("enter the size of an array:=");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
   }
   printf("Enter the element to be search:=");
   scanf("%d",&m);
   search(n,a,m);
  return 0;
  
    }
  int search(int n,int *a,int m)
  {
     for(i=0;i<n;i++)
      {
        if(m==a[i])
        {
          b=1;
          break;
         }
      }
       if(b==1)
        { 
         printf("The element %d is present in an array",m);
        }
            else
       {
         printf("The element %d is not present in an array",m);
       }
   }    
