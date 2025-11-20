#include <stdio.h>
// checking whether a number is palindrome or not 

int main()
{
    int n, reverse=0, original, remainder;
    printf("enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+ remainder;
        n/=10;
    }
    if (original==reverse)
    {
        printf("entered number is a palindrome");
    }
    else
    {
        printf("entered number is not a palindrome");
    }
    return 0;
}