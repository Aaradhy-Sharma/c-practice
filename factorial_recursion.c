#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0

// function declaration //
signed factorial(signed n);


// driver code //
signed main(void)
{
    signed number_input = null;
    printf("\n Enter a number: ");
    scanf("%d", &number_input);
    printf("\n Factorial of %d is %d", number_input, factorial(number_input));
}

// function definition //
signed factorial(signed n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}