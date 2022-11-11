// simple c program to print the fibonacci series upto n terms using recursions in a user defined function //
#include <stdio.h>
#include <stdlib.h>
#define null 0

// function declaration //
signed fibonacci_recursive_printer(signed number);

// driver code //
signed main(void)
{
    signed nth_term_input;
    printf("\n Please enter the number upto which you want to print the fibonacci series using recursions in a user defined function:");
    scanf("%d", &nth_term_input);

    printf("\n The fibonacci series upto %d terms using recursions in a user defined function is : ", nth_term_input);
    for(signed i=null;i<nth_term_input;i++)
        {
            printf(" %d", fibonacci_recursive_printer(i)); // function call //
        }
    return null;
}

// function definition //
signed fibonacci_recursive_printer(signed number)
{
    signed first_term=null,second_term=1,next_term;
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
            return(fibonacci_recursive_printer(number-1)+fibonacci_recursive_printer(number-2));
        }
}