#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0

//function definition//
signed power_set(signed array[], signed n);

// driver code //
signed main(void)
{
    signed n;
    printf("\n Please enter the number of elements in the array : ");
    scanf("%d", &n);

    signed array[n];
    printf("\n Please enter the elements of the array : ");
    for (signed i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    power_set(array, n);
}

// function definition //
signed power_set(signed array[], signed n)
{
    signed i, j, k;
    for (i = 0; i < pow(2, n); i++)
    {
        printf("( ");
        for (j = 0; j < n; j++)
        {
            
            if (i & (1 << j))
            {
                printf("%d ", array[j]);
            }
            
        }
        printf(")");
        printf("\n");
    }
}