
// Which of the following is invalid in C?
// a. int a=1; int b = a; valid
// b. int v = 3*3; valid
// c. char dt = ‘21 dec 2020’; invalid

// What data type will 3.0/8 – 2 return?
// it will be in floating point

// //  Write a program to check whether a number is divisible by 97 or not.
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num % 97 == 0)
    {
        printf("%d is divisible by 97.\n", num);
    }
    else
    {
        printf("%d is not divisible by 97.\n", num);
    }

    return 0;
}

// Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
// the output is 0
// 3 * 2 / 3 - 3 + 1
// 6 / 3 - 3 + 1
// 2 - 3 + 1
// -1 + 1
// 0

// 3.0 + 1 will be:
// a. Integer.
// b. Floating point number. answer
// c. Character