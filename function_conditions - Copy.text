/* Application of arithmatic operations */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, opt;

    int addition();
    int subtraction();
    int multiplication();
    int division();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("You choosed the value of a = %d and b = %d \n Please select one of the below option: \n", a, b);
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        addition(a, b);
        break;
    case 2:
        subtraction(a, b);
        break;
    case 3:
        multiplication(a, b);
        break;
    case 4:
        division(a, b);
        break;
    default:
        printf("Invalid option! \n");
        break;
    }
}

int addition(int a, int b)
{
    int sum;
    sum = a + b;
    printf("The sum of a and b is: %d \n", sum);
}

int subtraction(int a, int b)
{
    int difference;
    difference = a - b;
    printf("The difference of a and b is: %d \n", difference);
}

int multiplication(int a, int b)
{
    int product;
    product = a * b;
    printf("The product of a and b is: %d \n", product);
}

int division(int a, int b)
{
    int quotient;
    quotient = a / b;
    printf("The quotient of a and b is: %d \n", quotient);
}
