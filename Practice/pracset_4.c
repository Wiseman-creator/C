// Write a program to print multiplication table of a given number n.
// #include <stdio.h>

// int main(void)
// {
//     int n = 5;
//     for(int i = 1; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//     }

//     return 0;
// }

//  Write a program to print multiplication table of 10 in reversed order.

// #include <stdio.h>

// int main(void)
// {
//     int n = 5;
//     for(int i = 10; i ; i--)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//     }

//     return 0;
// }

// A do while loop is executed:
// a. At least once. ---> answer
// b. At least twice.
// c. At most once.

//  What can be done using one type of loop can also be done using the other two
// types of loops – true or false? true

// Write a program to sum first ten natural numbers using while loop
// #include <stdio.h>

// int main(void)
// {
//     int sum = 0, i = 1;
//     while(i <= 10)
//     {
//         sum += i;
//         i++;
//     }
//     printf("Sum of first ten natural numbers: %d",sum);
//     return 0;
// }

// Write a program to implement program 5 using ‘for’ loop
// #include <stdio.h>

// int main(void)
// {
//     int sum = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         sum += i;
//     }
//     printf("Sum of first ten natural numbers: %d",sum);
//     return 0;
// }

// Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).
// #include<stdio.h>
// int main(void)
// {
//     int n = 8, sum = 0;
//     for(int i = 1; i <= 10; i++)
//     {
//         sum += n*i;
//     }
//     printf("the sum of the numbers occurring in the multiplication table of 8: %d",sum);
//     return 0;
// }

// Write a program to calculate the factorial of a given number using a for loop
// #include <stdio.h>

// int main(void)
// {
//     int factorial = 1;
//     for (int i = 5; i > 1; i--)
//     {
//         factorial *= i;
//     }
//     printf("%d",factorial);
//     return 0;
// }

// Repeat 8 using while loop

// #include <stdio.h>

// int main(void)
// {
//     int factorial = 1, i = 1,num = 5;
//     while(num > 1)
//     {
//         factorial *= num;
//         num--;
//     }
//     printf("%d",factorial);
//     return 0;
// }

//  Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>
#include <math.h>
int main(void)
{
    int num, limit;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num < 2)
    {
        printf("It is not a prime number.", num);
        return 0;
    }

    limit = sqrt(num);

    for (int i = 2; i <= limit; i++)
    {
        if ((num % i) == 0)
        {
            printf("%d is divisible by %d\nIt is not a prime.", num, i);
            return 0;
        }
    }
    printf("It is a prime number.");
    return 0;
}