// accept and print names of 3 books using array of pointers

#include <stdio.h>

int main()
{
    char *books[3];
    char buffer[3][100];
    for (int i =0; i<3; i++)
    {
        printf("enter name of book %d: ");
        fgets(buffer[i], sizeof(buffer[i]), stdin);
        books[i]=buffer[i];
    }
    puts("name of books are:\n");
    for (int i=0; i<3; i++)
    {
        printf("%s", books[i]);
    }
    return 0;
}