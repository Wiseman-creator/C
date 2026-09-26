// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the
// array

// #include <stdio.h>

// int main(void)
// {
//     int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int *ptr = &nums[0];
//     printf("%d", *(ptr + 2));
//     return 0;
// }

// If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False. // *(S+3) = S[3], which is the 4th element in an array that has at least 4 elements.
// (iii) Depends.

//  Write a program to create an array of 10 integers and store multiplication table of
// 5 in it.
// Repeat problem 3 for a general input provided by the user using scanf.

// #include <stdio.h>

// int main(void)
// {
//     int arr[10], n;
//     printf("Enter a number: \n");
//     scanf("%d", &n);

//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = n * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }

// Write a program containing a function which reverses the array passed to it.

// #include <stdio.h>
// void reverse(int arr[], int n);
// int main(void)
// {
//     int arr[5] = {1, 2, 3, 4, 5}, n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
//     reverse(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }

//     return 0;
// }

// void reverse(int arr[], int n)
// {
//     int temp;
//     for (int i = 0; i < n / 2; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
// }

// // Write a program containing functions which counts the number of positive
// // integers in an array.

// #include <stdio.h>
// int positivecounter(int arr[], int n);
// int main(void)
// {
//     int array[10] = {-2, 9, 56, -78, 33, 7, -6, 7, -2, 8};
//     printf("No. of positive integers: %d", positivecounter(array, 10));

//     return 0;
// }

// int positivecounter(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively

// #include <stdio.h>

// int main(void)
// {
//     int arr[3][10];
//     int num[3] = {2,7,9};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             arr[i][j] = num[i] * (j+1);
//         }

//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Repeat problem 7 for a custom input given by the user

// #include <stdio.h>

// int main(void)
// {
//     int arr[3][10];
//     int num[3];

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter number%d: ", i + 1);
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             arr[i][j] = num[i] * (j + 1);
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Table of %d ----\n", num[i]);
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Create a three–dimensional array and print the address of its elements in
// increasing order.

// #include <stdio.h>

// int main(void)
// {
//     int arr[2][2][3];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < 3; k++)
//             {
//                 printf("Address of arr[%d][%d][%d] = %u\n",
//                        i, j, k,&arr[i][j][k]);
//             }
//         }
//     }

//     return 0;
// }