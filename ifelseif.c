#include <stdio.h>
#include <conio.h>

void main()
{

    int num;
    printf("Enter the any number: ");
    scanf("%d", &num);

    if (num < 100)
    {
        printf("The number is less than 100\n");
    }
    else if (num == 100)
    {
        printf("The number is equal to 100\n");
    }
    else
    {
        printf("The number is greater than 100\n");
    }
}