#include <stdio.h>
#include <conio.h>

double addition();     // function Declearation
double substraction(); // function Declearation

void main()
{
    // printf("Hello World");
    double a = 10.45;
    double b = 20.15;
    double add = addition(a, b);
    double sub = substraction(a, b);
    printf("Addition of a + b = %f \n Substraction of a - b = %f", add, sub);
    getch();
}

// Function defination
double addition(double x, double y)
{
    double z = x + y;
    return z;
}

double substraction(double x, double y)
{
    double z = y - x;
    return z;
}