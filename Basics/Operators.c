// there are three type of instructions in c
// 1. type decleration instruction int a; float b; char c;

// 2. Arithmatic instruction eg. +,-.*,/,%
//     %(modulus) ---> return the remainder, cann't be applied on float, sign is the same as of numerator.
//     for exponentiation there is no in operator, however we can use power func from the <math.h> lib.

// 3. control instruction ---
// 1. Sequence Control instructions.
// 2. Decision Control instructions
// 3. Loop Control instructions
// 4. Case Control instructions.

// type conversion
// int and int --> int
// int and float--> float
// int a = 3.5; // In this case 3.5 (float) will be demoted to 3 (int)
// because a is not able to store floats.
// float a = 8; // a will store 8.0 | 8 -> 8.0 (promotion to float)

// operator precedence in C
//  * / %   --->    + -    --->  =
// operator associativity
// when opartyors are equal precedence in an expression the calculation will be from left to right

// assignment operator
// = , +=, -=, *=, /=

// increment/decrement
// ++, --   eg. count++

// coditional operator
//  condition ? value1 : value2;

// Bitwise operators
// & | ^ ~ << >>

#include <stdio.h>

int main(void)
{
    const int x = 10;
    double b = x;
    printf("%f", b);
    return 0;
}
// int ---> double
// automatic conversion

float result = (float)5 / 2;
// explicit conversion