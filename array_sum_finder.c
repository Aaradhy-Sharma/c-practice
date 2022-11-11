// simple c program to find the sum of an array input by the user using recursions in a user defined function //

#include <stdio.h>
#include <stdlib.h>
#define null 0
#define max_array_length 100

// function declaration //
signed array_sum_finder(signed *array, signed array_size);

// driver code //
signed main(void)
{
    signed array[max_array_length], array_size, i;
    printf("Please enter the size of the array: ");
    scanf("%d", &array_size);

    printf("Please enter the elements of the array: ");
    for(i=null;i<array_size;i++)
       {
        scanf("%d", &array[i]);
       }
    
    printf("The sum of the elements of the array is: %d", array_sum_finder(array, array_size));
    return null;
}

// function definition //
signed array_sum_finder(signed *array, signed array_size)
{
    if(array_size==null)
        {
            return null;
        }
    else
        {
            return (array[array_size-1]+array_sum_finder(array, array_size-1));
        }
}