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

// function definition //
void fibonacci_printer(signed number)
{
    signed i, first_term=null, second_term=1, next_term;
    printf("\n The fibonacci series upto %d is: ", number);
    for(i=null;i<number;i++)
       {
        if(i<=1)
           {
            next_term=i;
           }
        else
           {
            next_term=first_term+second_term;
            first_term=second_term;
            second_term=next_term;
           }
        printf("%d ", next_term);
       }
}