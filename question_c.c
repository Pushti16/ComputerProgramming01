#include <stdio.h>
// function to calculate sum of all numbers divisible by 3 and 13 between 1 and 100
int main() {
    int n, sum=0;
    for (n=1; n<=100; n++)
    {
        if (n%3==0 && n%13==0)
        {
            sum+=n;
        }
    }
    printf("Sum of all numbers divisible by 3 and 13 between 1 and 100 is: %d\n", sum);
    return 0;
}
