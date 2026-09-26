// Array --- an array is a collection of multiple values of similar elements stored together.
// array allows a single variable to store multiple values

// int mark1 = 81;
// int mark2 = 82;
// int mark3 = 83;
// int mark4 = 84;
// int mark5 = 85;
// int mark6 = 86;

// int marks[5] = {81, 82, 83, 84, 85};
// An array stores multiple values under one variable name
// Declaring an array
// data_type array_name[size];

// int marks[6] = {1, 2, 3, 4, 5, 6};
// int marks[] = {1, 2, 3, 4, 5, 6};
// C automatically creates an array of size 5
// int num[5] = {1,3,5}; // remaining elements become 0,0

// #include <stdio.h>

// int main(void)
// {
//     int marks[6] = {81, 82, 83, 84, 85, 86};
//     marks[3] = 0;
//     printf("%d\n",marks[0]);
//     printf("%d\n",marks[1]);
//     printf("%d\n",marks[3]);
//     return 0;
// }

// using loop in array
// #include <stdio.h>

// int main(void)
// {
//     int marks[] = {80, 75, 92, 68, 88};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d \t",marks[i]);
//     }

//     return 0;
// }

// taking array as input
// #include <stdio.h>

// int main(void)
// {
//     int marks[5];

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter marks%d :", i);
//         scanf("%d", &marks[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Marks%d = %d\n", i, marks[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int marks[] = {80, 75, 92, 68, 88};
//     int sum = 0, target = 75;
//     int max = marks[0], min = marks[0];
//     for (int i = 0; i < 5; i++)
//     {
//         sum += marks[i];
//         if (marks[i] >= max)
//         {
//             max = marks[i];
//         }
//         if (marks[i] <= min)
//         {
//             min = marks[i];
//         }
//         if (marks[i] == target)
//         {
//             printf("Found at index %d\n", i);
//         }
//     }
//     printf("sum = %d\n", sum);
//     printf("max = %d\n", max);
//     printf("min = %d\n", min);
//     printf("average = %.2f\n", sum / 5.0);
//     return 0;
// }

// Passing Arrays to Functions
// #include <stdio.h>
// void reverse(int arr[], int size)
// {
//     for (int i = 0; i < size / 2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[size - i - 1];
//         arr[size - i - 1] = temp;
//     }
// }
// int main(void)
// {
//     int marks[] = {80, 75, 92, 68, 88, 12, 34};
//     int n = 7;
//     reverse(marks, n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", marks[i]);
//     }
//     return 0;
// }

// 2D array
// int marks[3][4];
// int marks[3][3] = {
//     {80, 75, 90},
//     {65, 98, 45},
//     {89, 95, 78}};

// Taking matrix input
// #include <stdio.h>

// int main(void)
// {
//     int matrix[2][3];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter marks[%d][%d]: \n", i + 1, j + 1);
//             scanf("%d", &matrix[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", matrix[i][j]);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// Matrix Operation --------
// #include <stdio.h>

// void matrix_addition(int A[2][2], int B[2][2]);
// void matrix_subtraction(int A[2][2], int B[2][2]);
// void matrix_multiplication(int A[2][2], int B[2][2]);
// void matrix_transpose(int A[2][2]);

// int main(void)
// {
//     int A[2][2] = {
//         {1, 2},
//         {3, 4}};
//     int B[2][2] = {
//         {5, 6},
//         {7, 8}};
//     matrix_addition(A, B);
//     printf("\n");
//     matrix_subtraction(A, B);
//     printf("\n");
//     matrix_multiplication(A, B);
//     printf("\n");
//     matrix_transpose(B);
//     return 0;
// }

// void matrix_addition(int A[2][2], int B[2][2])
// {
//     int C[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             C[i][j] = A[i][j] + B[i][j];
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
// }
// void matrix_subtraction(int A[2][2], int B[2][2])
// {
//     int C[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             C[i][j] = B[i][j] - A[i][j];
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
// }
// void matrix_multiplication(int A[2][2], int B[2][2])
// {
//     int C[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             C[i][j] = 0;
//             for (int k = 0; k < 2; k++)
//             {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
// }
// void matrix_transpose(int A[2][2])
// {
//     int transpose[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             transpose[j][i] = A[i][j];
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }
// }

// Passing 2D arrays to functions
// a 2D array parameter needs the column size known to the compiler

// // Pointer arithmatic
// A pointer can be incremented to point to the next memory location of that type
