#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function definition//

signed isPrime(signed n);

// driver code //
signed main(void)
{
    signed n;
    printf("\n Please enter a number to check if it is a prime number or not : ");
    scanf("%d", &n);

    if (isPrime(n) == 1)
    {
        printf("\n %d is a prime number", n);
    }
    else
    {
        printf("\n %d is not a prime number", n);
    }

}

// function definition //
signed isPrime(signed n)
{
    signed i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}