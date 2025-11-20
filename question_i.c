//accept 5 values from user and store in an array, print even values of the array
#include <stdio.h>

int main()
{
    int ar1[5], i;
    printf("enter 5 values: ");
    for (i=0; i<5; i++)
    {
        scanf("%d", &ar1[i]);
    }
    printf("even values of array are: \n");
    for (i=0; i<5; i++)
    {
        if (ar1[i]%2==0)
        {
            printf("%d\n ", ar1[i]);
        }
    }
    return 0;
}