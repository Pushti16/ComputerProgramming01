#include <stdio.h>

int main() {
    int year;
    printf("entr year:");
    scanf("%d", &year);
    if ((year % 4==0 && year % 100!=0) || (year %400==0))
    {
        printf("your year is a leap year");
    }
    else
    {
        printf("your year is not a leap year");
    }
    return 0;
}