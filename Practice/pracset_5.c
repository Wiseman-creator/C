// Write a program using function to find average of three numbers.
// #include <stdio.h>
// float average(float a, float b, float c);
// float main(void)
// {
//     float avg;
//     avg = average(27,31,42);
//     printf("The average is %.2f\n",avg);

//     return 0;
// }
// float average(float a, float b, float c){
//     return (a+b+c) / 3.0;
// }

//  Write a function to convert Celsius temperature into Fahrenheit.

// #include <stdio.h>
// float CelsiusToFahrenheit(float celsius);
// int main(void)
// {
//     float fahrenheit, celsius = 40.00;
//     fahrenheit = CelsiusToFahrenheit(celsius);
//     printf("%.2f degree Celsius = %.2f degree Fahrenheit\n", celsius, fahrenheit);

//     return 0;
// }
// float CelsiusToFahrenheit(float celsius)
// {
//     float f;
//     f = celsius * (9.0 / 5) + 32;
//     return f;
// }

//  Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s^2

// #include <stdio.h>
// float force_of_gravity(float mass);
// int main(void)
// {
//     float mass,force;
//     printf("Enter the mass of the body:\n");
//     scanf("%f",&mass);
//     force = force_of_gravity(mass);
//     printf("Force of attraction = %.2f N",force);
//     return 0;
// }
// float force_of_gravity(float mass)
// {
//     return mass * 9.8;
// }

// Write a program using recursion to calculate nth element of Fibonacci series

// #include <stdio.h>
// int fibonacci (int n);
// int main(void)
// {
//     int n,result;
//     printf("Enter a number:\n");
//     scanf("%d", &n);
//     result = fibonacci(n);

//     printf("The %dth Fibonacci number is %d\n", n, result);

//     return 0;
// }
// int fibonacci (int n)
// {
//     if ( n == 0 )
//     {
//         return 0;
//     }
//     else if( n == 1 )
//     {
//         return 1;
//     }
//     else{
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
// }

// What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);

// we will get undefined behaviour
// #include <stdio.h>

// int main(void)
// {
//     int a = 4;
//     printf("%d %d %d \n", a, ++a, a++);

//     return 0;
// } // output 6 6 4

// Write a recursive function to calculate the sum of first ‘n’ natural numbers

// #include <stdio.h>
// int sum (int n);
// int main(void)
// {
//     int n,result;
//     printf("Enter a number:\n");
//     scanf("%d", &n);
//     result = sum(n);
//     printf("sum of first %d natural numbers is: %d\n.",n,result);

//     return 0;
// }

// int sum (int n)
// {
//     if (n <= 0)
//     {
//         return 0;
//     }
//     else{
//         return n + sum(n-1);
//     }
// }

// Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *

#include <stdio.h>
void star_pattern(int n);
int main(void)
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    star_pattern(n);
    return 0;
}
void star_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}