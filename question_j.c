// taking ages of 10 people, storing in an array and checking voting eligibilty based on age
#include <stdio.h>

int main()
{ 
    int age[10], i;
    printf("enter ages of all 10 people: ");
    for (i=0; i<10; i++)
    {
        scanf("%d", &age[i]);
    }
    printf("voting eligibilty based on age:\n");
    for (i=0; i<10; i++)
    {
        if (age[i]>10)
        {
            printf("person of age %d is eligible to vote\n", age[i]);        
        }
        else
        {
            printf("person of age %d is not eligible to vote\n", age[i]);
        }
    }
    return 0;
}