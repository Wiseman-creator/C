// Pointers-- a pointer is a variable that stores the address of another variable.

//     Address -
//     of - operator-- &i Value at adress-- *or dereference pointer
// #include <stdio.h>

//     int main(void)
// {
//     int x = 10, t = 10;
//     int *y = &x;
//     int **z = &y; // pointer to pointer
//     printf("%d\n", x);
//     printf("%u\n", &x); // %p pointer format specifier
//     // (%u used sometimes to print it in form of long integer format.)
//     printf("%u\n", &y);
//     printf("%u\n", &z);

//     printf("%d\n", t);
//     printf("%u\n", &t);
//     return 0;
// }

// A pointer is declared using the following syntax.
// • int *j = > declare a variable j of type int - pointer
// • j = &i = > store address of i in j.Just like pointer of type integer, we also have pointers to char, float etc.

//                                                                                                         int *in_ptr; // pointer to integer
// char *ch_ptr;                                                                                                        // pointer to character
// float *fl_ptr;                                                                                                       // pointer to float
// double *dbl_ptr                                                                                                      // pointer to double

//     Changing a variable through a pointer
// #include <stdio.h>

//     int main(void)
// {
//     int x = 10;
//     int *p = &x;

//     *p = 50; // A pointer can be used to directly modify another variable.
//     printf("%d\n", x);
//     // Pointer size- -----
//     printf("%zu\n", sizeof(int *));
//     printf("%zu\n", sizeof(float *));
//     printf("%zu\n", sizeof(char *));
//     printf("%zu\n", sizeof(long double *));

//     // NULL pointer-------
//     int *q = NULL;
//     printf("%d\n", *q);

//     return 0;
// }

// POinters and Functions-- -- --pass by a value-- -
// #include <stdio.h>
//     void swap(int x);

// void swap(int x)
// {
//     x = 100;
// }
// int main(void)
// {
//     int x = 10;
//     swap(x);
//     printf("%d", x); // output = 10
//     // The original value does not change
//     // Because change() receives a copy of a.

//     return 0;
// }

// pass by a value-- -
// #include <stdio.h>
//     void swap(int *x);

// void swap(int *x)
// {
//     *x = 100;
// }
// int main(void)
// {
//     int x = 10;
//     swap(&x);
//     printf("%d", x); // output = 100
//     return 0;
// }

// Pointer Parameter-- -- -Swapping two variables
// #include <stdio.h>
//     void swap(int *a, int *b);
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(void)
// {
//     int x = 10;
//     int y = 20;

//     swap(&x, &y);

//     printf("x = %d\n", x);
//     printf("y = %d\n", y);

//     return 0;
// }

// Returning values through pointers
// #include <stdio.h>
//     void calculate(int a, int b, int *sum, int *product)
// {
//     *sum = a + b;
//     *product = a * b;
// }
// int main(void)
// {
//     int x = 5, y = 6;
//     int sum, product;

//     calculate(x, y, &sum, &product);
//     printf("Sum = %d\n", sum);
//     printf("Product = %d\n", product);

//     return 0;
// }

// Arrays passed to function

// #include <stdio.h>
//     int total(int *arr, int size)
// {
//     int sum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
// int main(void)
// {
//     int marks[] = {80, 75, 92, 68, 88};

//     int result = total(marks, 5);

//     return 0;
// }