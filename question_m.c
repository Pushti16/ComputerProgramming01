// copying content of one string to another
#include <stdio.h>

int main()
{
    char str[100], copied[100];
    int i;
    printf("enter a string to copy: ");
    fgets(str, sizeof(str), stdin);
    for (i=0; str[i]!='\0'; i++)
    {
        copied[i]=str[i];
    }
    copied[i]='\0'; 
    printf("copied string is: %s\n", copied);
    return 0;
}