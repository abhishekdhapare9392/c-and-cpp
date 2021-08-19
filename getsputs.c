/* Gets and Puts instead of scanf and printf */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char name[20];
    puts("Enter your name: ");
    gets(name);
    puts("Hello");
    puts(name);
    getch();
}
