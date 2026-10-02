// 1. Write a program to read three integers from a file.

// #include <stdio.h>

// int main(void)
// {
//     int num;
//     FILE* ptr;
//     ptr = fopen("test1.txt","r");
//     for (int i = 0; i < 3; i++)
//     {
//         fscanf(ptr,"%d",&num);
//         printf("%d\n",num);
//     }
//     fclose(ptr);
//     return 0;
// }

// 2. Write a program to generate multiplication table of a given number in text
// format. Make sure that the file is readable and well formatted.

// #include <stdio.h>

// int main(void)
// {
//     int n;
//     FILE *ptr;

//     printf("Enter a number: ");
//     scanf("%d", &n);
//     ptr = fopen("test2.txt", "a+");
//     for (int i = 0; i < 10; i++)
//     {
//         fprintf(ptr, "%d X %d = %d\n", n, i + 1, n * (i + 1));
//     }

//     fclose(ptr);
//     return 0;
// }

// 3. Write a program to read a text file character by character and write its content
// twice in separate file.

// #include <stdio.h>

// int main(void)
// {
//     FILE* ptr1;
//     FILE* ptr2;
//     FILE* ptr3;

//     ptr1 = fopen("test31.txt","r");
//     ptr2 = fopen("test32.txt","w");
//     ptr3 = fopen("test33.txt","w");

//     if(ptr1 == NULL || ptr2 == NULL || ptr3 == NULL)
//     {
//         printf("Error in opening file.\n");
//         return 1;
//     }
//     char ch;
//     while (((ch = fgetc(ptr1)) != EOF))
//     {
//         {
//             fputc(ch,ptr2);
//             fputc(ch,ptr3);
//         }
//     }

//     fclose(ptr1);
//     fclose(ptr2);
//     fclose(ptr3);

//     return 0;
// }

// 4. Take name and salary of two employees as input from the user and write them to
// a text file in the following format:
// i. Name1, 3300
// ii. Name2, 7700

// #include <stdio.h>
// typedef struct employee
// {
//     char name[100];
//     float salary;
// } eml;

// int main(void)
// {
//     eml emp[2];
//     FILE *fp = fopen("test4.txt", "a+");

//     if (fp == NULL)
//     {
//         printf("The file is invalid:(");
//         return 1;
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         printf("Enter the name of the employee%d:\n", i + 1);
//         scanf("%99s", emp[i].name);
//         printf("Enter the salary of employee%d:\n", i + 1);
//         scanf("%f", &emp[i].salary);
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         fprintf(fp, "%s, %.2f\n", emp[i].name, emp[i].salary);
//     }

//     fclose(fp);
//     printf("Employee details saved succesfully:)");
//     return 0;
// }

// 5. Write a program to modify a file containing an integer to double its value.

// #include <stdio.h>

// int main(void)
// {
//     FILE *fp = fopen("test5.txt", "r+");

//     if (fp == NULL)
//     {
//         printf("Error opening file.\n");
//         return 1;
//     }

//     int num;

//     if (fscanf(fp, "%d", &num) != 1)
//     {
//         printf("Error reading integer.\n");
//         fclose(fp);
//         return 1;
//     }

//     num = num * 2;

//     fseek(fp, 0, SEEK_SET);
//     fprintf(fp, "%d", num);

//     fclose(fp);

//     printf("File modified successfully.\n");

//     return 0;
// }