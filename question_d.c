#include <stdio.h>
// sum of first n odd numbers
int main()
{
    int n, sum=0;
    printf("enter how many odd numbers to sum up: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        sum += (2*i + 1); 
    }
    printf("Sum of first %d odd numbers is: %d\n", n, sum);
    return 0;
}