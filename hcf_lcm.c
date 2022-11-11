// simple c program to find the HCF and LCM of a given number using recursions //

#include <stdio.h>
#include <stdlib.h>
#define null 0

// function declaration //
signed hcf(signed number1, signed number2);
signed lcm(signed number1, signed number2);

// driver code //
signed main(void)
{
    signed number1, number2;
    printf("\n Please enter the first number: ");
    scanf("%d", &number1);
    printf("\n Please enter the second number: ");
    scanf("%d", &number2);
    printf("\n The HCF of %d and %d is: %d", number1, number2, hcf(number1, number2));
    printf("\n The LCM of %d and %d is: %d", number1, number2, lcm(number1, number2));
    return null;
}

// function definition //
signed hcf(signed number1, signed number2)
{
    if(number2==null)
        {
            return number1;
        }
    else
        {
            return hcf(number2, number1%number2);
        }
}

signed lcm(signed number1, signed number2)
{
    return (number1*number2)/hcf(number1, number2);
}
