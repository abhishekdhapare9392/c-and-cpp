#include <stdio.h>
#include <conio.h>
int rec();
void main()
{
    int a, fact;
    printf("\n Enter any number: \n");
    scanf("%d", &a);
    fact = rec(a);
    printf("\nFactorial of %d is %d\n", a, fact);
}

int rec(int x)
{
    int f;
    if (x == 1)
        return (1);
    else
        f = x * rec(x - 1);
    printf("\nEntered Number: %d\n factorial : %d", x, f);

    return (f);
}
