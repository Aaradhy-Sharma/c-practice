// this is a program to print fibonacci series using recursion //
#include <stdio.h>
#include <stdlib.h>
#define null 0

// function declaration //
signed fibonacci_recursive_printer(signed number);

// driver code //
signed main(void)
{
    signed number;
    printf("\n Please enter the number upto which you want to print the fibonacci series: ");
    scanf("%d", &number);
    fibonacci_recursive_printer(number);
    return null;
}

// function definition //
signed fibonacci_recursive_printer(signed number)
{
    if(number==null)
       {
            return null;
       }
    else if(number==1)
       {
            return 1;
       }
    else
       {
         return (fibonacci_recursive_printer(number-1)+fibonacci_recursive_printer(number-2));
       }
}

