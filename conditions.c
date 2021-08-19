#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is Even Number", a);
    else
        printf("%d is Odd Number", a);

    getch();
}