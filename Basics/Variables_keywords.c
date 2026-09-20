// a variable is a container which stores a value
// 1. first char will be an alphabet or _
// 2.  no commas or blanks are allowed
// 3. no special char or symbol other than _ is allowed
// 4. varible names are case sensitive

// contants ---> an entity whoose value does not change
// there are 3 types of constants---
// 1. integer constants eg. 2, 3, 88, -89
// 2. real constants eg. 5.0, -55.0
// 3. charecter constants eg. 'a','$'

// keywords ---> there are 32 total reserved keywords available in C.
// auto
// break
// case
// char
// const
// continue
// default
// do
// double
// long
// return
// register
// short
// signed
// sizeof
//  static
// int
// else
// enum
// extern
// float
// for
// goto
// if
// struct
// switch
// typedef
// union
// unsigned
// void
// volatile
// while

#include <stdio.h>

int main(void)
{
    printf("Hello, I am learning C.\nEnter a number:\n"); // for print

    int a;
    scanf("%d", &a); // for taking input from user
    printf("You entered: %d", a);
    return 0;
}
// single line comments
/*  Multi line comments
    first.c ---. c compiler(*gcc) ---> first.exe    */
// char - 1 , int - 2, float - 4, double - 8 byte
