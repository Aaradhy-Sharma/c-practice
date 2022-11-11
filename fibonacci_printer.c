// a simple c program to print the fibonacci series upto a given number //
#include <stdio.h>
#include <stdlib.h>
#define null 0

// function declaration //
void fibonacci_printer(signed number);

// driver code //
signed main(void)
{
    signed number;
    printf("\n Please enter the number upto which you want to print the fibonacci series: ");
    scanf("%d", &number);
    fibonacci_printer(number);
    return null;
}