#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0 

//function definition//
signed number_reverser(signed n);

// driver code //
signed main(void)
{
    signed n;
    printf("\n Please enter a number to reverse it : ");
    scanf("%d", &n);

    printf("\n The reversed number is : %d", number_reverser(n));
}

// function definition //
signed number_reverser(signed n)
{
    signed reversed_number = 0;
    while (n != 0)
    {
        reversed_number = reversed_number * 10 + n % 10; // 1234 % 10 = 4 // 123 % 10 = 3 // 12 % 10 = 2 // 1 % 10 = 1
        n /= 10; // 1234 / 10 = 123 // 123 / 10 = 12 // 12 / 10 = 1 // 1 / 10 = 0
    }
    return reversed_number;
}