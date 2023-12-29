/*5.Write a program in C to count the number of vowels and consonants in a string using a pointer.*/

#include <stdio.h>
int main()
{
   int c1=0,c2=0;
   char str[10],*p;
   printf("enter the string\n");
   scanf("%s",str);
   p=str;
   while(*p!=0)
    {
      if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
      c1++;
      else
      c2++;
      p++;
      }
      printf("\n vowel=%d\n consonants=%d",c1,c2);
      return 0;
}
