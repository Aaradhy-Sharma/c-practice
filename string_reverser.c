#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0
#define maximum_string_length 100

//function definition//
signed string_reverser(char *string);

// driver code //
signed main(void)
{
    char string_input[maximum_string_length];
    printf("\n Please enter a string to reverse it :");
    scanf("%s", string_input);

    string_reverser(string_input);
    return null;
}

// function definition //
signed string_reverser(char *string)
{
    signed string_length = strlen(string);
    signed i;
    for (i = string_length - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    return null;
}