#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function definition//
signed fibonacci_triangle(signed n);

// driver code //
signed main(void)
{
    signed n;
    printf("\n Please enter a number to print the fibonacci triangle : ");
    scanf("%d", &n);

    fibonacci_triangle(n);
}

// function definition //
signed fibonacci_triangle(signed n)
{
    signed i, j, k, a = 0, b = 1, c;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }
}