// simple c program to print the factorial of a given number using recursions in a user defined function //

#include <stdio.h>
#include <stdlib.h>
#define null 0

// function declaration //
signed factorial_recursive_printer(signed number);

// driver code //
signed main(void)
{
    signed number;
    printf("\n Please enter the number whose factorial you want to print using recursions in a user defined function: ");
    scanf("%d", &number);
    printf("\n The factorial of %d using recursions in a user defined function is: %d", number, factorial_recursive_printer(number));
    return null;
}

// function definition //
signed factorial_recursive_printer(signed number)
{
    if(number==null)
        {
            return 1;
        }
    else
        {
            return (number*factorial_recursive_printer(number-1));
        }
}