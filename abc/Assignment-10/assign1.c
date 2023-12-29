/*Lower case to Uppercase: Convert a string from lower case to uppercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions.*/
#include <stdio.h>
#include <string.h>
void changeL(char *);
void changeL (char *s)
{
    for (int i = 0; s[i]!='\0'; i++)
    {

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        } 
        s[i]!='\0';
    }       
}

int main (void)
{
    char first[100];
    printf("Enter the string to be convert=");
    scanf("%s",first); 
    char *second = first;
    printf("%s\n", first);
    changeL(first);
    printf("%s\n", second);
    return 0;
}
