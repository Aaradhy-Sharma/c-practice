// c program to reverse an array taken as input from the user //
#include <stdio.h>
#include <stdlib.h>
#define null 0 
#define maximum_array_size 100

// function declaration //
void array_reverser(signed *array, signed array_size);

// driver code //
signed main(void)
{
    signed array[maximum_array_size], array_size, i;
    printf("Please enter the size of the array: ");
    scanf("%d", &array_size);

    printf("Please enter the elements of the array: ");
    for(i=null;i<array_size;i++)
       {
        scanf("%d", &array[i]);
       }
    
    array_reverser(array, array_size);
    return null;
}

// function definition //
void array_reverser(signed *array, signed array_size)
{
    signed i,j=array_size-1,temp;
    for(i=null;i<j;i++)
       {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        j--;

      }
    printf("\n The reversed array is: ");
    for(i=null;i<array_size;i++)
         {
          printf("%d ", array[i]);
         }
}