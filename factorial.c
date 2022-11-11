// simple c program to print the factorial of a given number without using recusrions //

#include <stdio.h>
#include <stdlib.h>
#define null 0

// function declaration //
void factorial_printer(signed number);

// driver code //
signed main(void)
{
    signed number;
    printf("\n Please enter the number whose factorial you want to print: ");
    scanf("%d", &number);
    factorial_printer(number);
    return null;
}

// function definition //
void factorial_printer(signed number)
{
    signed i, factorial=1;
    for(i=1;i<=number;i++)
        {
            factorial=factorial*i;
        }
    printf("\n The factorial of %d is: %d", number, factorial);
}