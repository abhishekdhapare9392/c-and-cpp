#include <stdio.h>
#include <conio.h>

void main()
{

    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    switch (num)
    {
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    default:
        printf("Please select between 2 to 4\n");
        break;
    }
}