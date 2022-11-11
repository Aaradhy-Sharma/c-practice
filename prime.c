#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0

//function definition//
signed Prime_checker(signed n);

// driver code //
signed main(void)
{
    signed number_input;
    printf("\n Please enter a number to check wether it is a prime number or not : ");
    scanf("%d", &number_input);

    Prime_checker(number_input);
    return null;
}

// function definition //
signed Prime_checker(signed n)
{
    signed i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("\n %d is not a prime number", n);
            return null;
        }
    }
    printf("\n %d is a prime number", n);
    return null;
}