// Write a program to print the address of a variable.Use this address to get the value of the variable.

// #include <stdio.h>

// int main(void)
// {
//     char apse = 'a';
//     char *apse_ptr = &apse;

//     printf("The address of the variable: %p\n", apse_ptr);
//     printf("The value of the variable at %p is %c\n", apse_ptr, *apse_ptr);

//     return 0;
// }

// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. Are these addresses same? Why?

// #include <stdio.h>
// void address(int x)
// {
//     x = 30;
//     printf("Address of x inside function: %p\n", &x);
// }

// int main(void)
// {
//     int i = 23;
//     printf("The address of i=%d is %p\n", i, &i);
//     // The address of i=23 is 0061FF1C
//     address(i); // C passes the value of i, not its address.
//     // no these addresses are different
//     return 0;
// }

// Write a program to change the value of a variable to ten times of its current value.

// #include <stdio.h>
// int ten_folds(int *x)
// {
//     *x = *x * 10;
// }
// int main(void)
// {
//     int i = 30;
//     ten_folds(&i);
//     printf("%d", i);

//     return 0;
// }

//  Write a function and pass the value by reference

// #include <stdio.h>
// void change(int *x)
// {
//     *x = 100;
// }
// int main(void)
// {
//     int a = 10;
//     printf("%d\n", a);
//     change(&a);
//     printf("%d\n", a);
//     return 0;
// }

//  Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().

// #include <stdio.h>
// int calculate(int a, int b, int *sum, float *average)
// {
//     *sum = a + b;
//     *average = *sum / 2.0;
// }
// int main(void)
// {
//     int x = 2, y = 3;
//     int sum;
//     float average;
//     calculate(x, y, &sum, &average);
//     printf("Sum : %d\n", sum);
//     printf("average : %.2f\n", average);
//     return 0;
// }

// Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable.

// #include <stdio.h>

// int main(void)
// {
//     int i = 23;
//     int *j = &i;
//     int **k = &j;
//     printf("The value of i = %d\n", **k);

//     return 0;
// }

