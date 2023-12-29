/*6.Write a program in C to store n elements(read from standard input) in an array and print the elements using pointer*/
#include <stdio.h>
int main()
{
       int num[50];
       int i,n;
       int *iptr=num;
       printf("Enter the size of array=");
       scanf("%d",&n);
       printf("Enter the array elemnet=");
       for(i=0;i<n;i++)
       {
          scanf("%d\t",iptr);
          iptr++;
        }  
         iptr=num;
       for(i=0;i<n;i++)
        {
         printf("Integer Array Element num[%d] : %d\n",i,*iptr);
          iptr++;
         }
     return 0;
 }

