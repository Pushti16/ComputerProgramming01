#include <stdio.h>
// find factors of a number

int main()
{
    int n, i;
    printf("enter a number:");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            printf("%d is a factor of %d\n", i, n);
        }
    }
    return 0;
}