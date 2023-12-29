/*3.Implement string library functions strlen, strcpy, strcat, strcmp with same return values and all error handling features using pointers. */#include<stdio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    
    /*char aa[100], bb[100];
    printf("\nEnter the first string: ");
    gets(aa);   
    printf("\nEnter the second string to be concatenated: ");
    gets(bb);   
    char *a = aa;
    char *b = bb;
     while(*a)   
    {
        a++;    
    }
    while(*b)   
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';  
    printf("\n\n\nThe string after concatenation is: %s ", aa);
    
    printf("******************************************************************************************");
    printf("\n");
    char str[1000];
    int k;
    char *ptr=str;;
    printf("Enter The STRing=:");
    scanf("%s",str);
    for(k=0;str[k]!='\0';k++);
    printf("The Length Of String %s is=%d\n",ptr,k);*/
    printf("******************************************************************************************");
    printf("\n");
    char str1[100], str2[100];
    int i = 0, f = 0, size1, size2;
    char *ptr1 = str1;
    char *ptr2 = str2;
    printf("Enter First String :");
    scanf("%[^\n]%*c", str1); 
    printf("Enter Second String :");
    scanf("%[^\n]%*c", str2); 
    size1 = strlen(str1);
    size2 = strlen(str2);
    if (size1 == size2) {
        while (*(ptr1 + i) != '\0') 
        {
            if (*(ptr1 + i) != *(ptr2 + i)) 
            {
                f = 1;
                break;
            }
            i++;
        }
    } 
    else 
    {
        f = 1;
    }

    if (f == 1) 
    {
        printf("Strings are Not Equal ");
    } else 
    {
        printf("Strings are Equal ");
    }
    
   /* printf("******************************************************************************************");
    printf("\n"); 
     char text1[100], text2[100];
    char * str3 = text1;
    char * str4 = text2; 
    printf("Enter any string: ");
    scanf("%s",text1);
    while(*(str4++) = *(str3++));

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);*/
    return 0;
}
   
   
   
