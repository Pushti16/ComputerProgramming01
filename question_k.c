#include <stdio.h>

// calculating length of string (without library function) and coverting to uppercase, lowercase and toggle case

int main()
{
    char str[100];
    int i, len=0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i=0; str[i]!=0;i++)
    {
        len++;
    }
    printf("length of entered string is: %d\n", len-1); // calculating length w/o newline char
    printf("string in uppercase: ");
    for (i=0; str[i]!=0; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        printf("%c", str[i]);
    }
    printf("\nstring in lowercase: ");
    for (i=0; str[i]!=0; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
        printf("%c", str[i]);
    }
    return 0;
    
}