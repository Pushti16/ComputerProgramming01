// finding whether a number is perfect nnumber or not
#include <stdio.h>

int main()
{
    int n, i, sum=0;
    printf("enter a number: ");
    scanf("%d", &n);
    for (i=1; i<=n/2; i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
    }
    if (sum==n)
    {
        printf("entered number is a perfect number");
    }
    else
    {
        printf("entered number is not a perfect number");
    }
    return 0;
}