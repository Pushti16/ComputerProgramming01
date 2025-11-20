// reversing string without in built function
#include <stdio.h> 

int main()
{
    char str[100], rev[100];
    int i, len=0, j;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i=0; str[i]!=0; i++)
    {
        len++;
    }
    for (j=0, i=len-2; i>=0; i--, j++) //(len -2 to avoid newline char)
    {
        rev[j]=str[i];
    }
    rev[j]=0;
    printf("reversed string is: %s\n", rev);
    return 0;
}