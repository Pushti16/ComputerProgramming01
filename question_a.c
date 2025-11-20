#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int temp = a;
    a = b;
    b = temp;   
    printf("After swapping: a = %d, b = %d\n", a, b);
    getch();
}