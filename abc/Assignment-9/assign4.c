/*4.Write a C program to find reverse of a string using pointers.*/
#include <stdio.h>
int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0;

   printf("Input a string\n");
   scanf("%s",s);
   while (s[count] != '\0')
   {
      count++;
    }
   end = count - 1;

   for (begin = 0; begin < count; begin++) 
   {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   printf("%s\n", r);

   return 0;
}
