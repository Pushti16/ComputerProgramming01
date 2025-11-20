// comparing 2 strings
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, flag=0;
    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (i=0; str1[i]!='\0' || str2[i]!='\0'; i++)
    {
        if (str1[i]!=str2[i])
        {
            flag+=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("both strings are same\n");
    }
    else{
        printf("both strings are different\n");
    }
    return 0;

}