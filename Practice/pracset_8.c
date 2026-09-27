// 1. Which of the following is used to appropriately read a multi-word string.
// 1. gets() --- used to read multi word sting but it is removed now,
// 2. puts() --- to print a string
// 3. printf() --- used to print
// 4. scanf()--- used to read single data type

// 2. Write a program to take string as an input from the user using %c and %s confirm
// that the strings are equal.

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char arr[100], arr1[100];
//     int i = 0;

//     printf("Enter a string1: ");
//     fgets(arr1, 100, stdin);
//     // Remove '\n' added by fgets()
//     arr1[strcspn(arr1, "\n")] = '\0';

//     printf("You entered string1: \n");
//     puts(arr1);

//     printf("Enter a string2: ");
//     while (1)
//     {
//         scanf("%c", &arr[i]);
//         if (arr[i] == '\n')
//         {
//             break;
//         }
//         i++;
//     }
//     arr[i] = '\0';
//     printf("You entered string2 : ");
//     for (int j = 0; arr[j] != '\0'; j++)
//     {
//         printf("%c", arr[j]);
//     }
//     if (strcmp(arr, arr1) == 0)
//     {
//         printf("\nBoth are equal:)");
//     }
//     else
//     {
//         printf("\nThey are not equal:()");
//     }
// }

// 3. Write your own version of strlen function from <string.h>

// #include <stdio.h>
// int strlength(char arr[]);
// int main(void)
// {
//     char arr[60] = "Hello world";
//     int str_size = strlength(arr);
//     printf("String length: %d", str_size);
//     return 0;
// }

// int strlength(char arr[])
// {
//     int i;
//     for (i = 0; arr[i] != '\0'; i++)
//     {
//     }

//     return i;
// }

// 4. Write a function slice() to slice a string. It should change the original string such
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
// for slice.

// #include <stdio.h>
// #include <string.h>
// void slice(char arr[], int m, int n)
// {
//     int i = 0;

//     while (m < n && arr[m] != '\0')
//     {
//         arr[i] = arr[m];
//         i++;
//         m++;
//     }
//     arr[i] = '\0';
// }
// int main(void)
// {
//     char arr[100] = "Helloworld";
//     printf("Original string: %s\n", arr);
//     slice(arr, 2, 7);
//     printf("Sliced string: %s\n", arr);

//     return 0;
// }

// 5. Write your own version of strcpy function from <string.h>

// #include <stdio.h>
// void strcopy(char dest[], char source[]);
// int main(void)
// {
//     char str[60] = "Aerodynamically";
//     char store[60];
//     strcopy(store, str);
//     puts(store);
//     return 0;
// }
// void strcopy(char dest[], char source[])
// {
//     int i = 0;
//     for (i = 0; source[i] != '\0'; i++)
//     {
//         dest[i] = source[i];
//     }
//     dest[i] = '\0';
// }
// 6. Write a program to encrypt a string by adding 1 to the ascii value of its characters.
// 7. Write a program to decrypt the string encrypted using encrypt function in problem 6.

// #include <stdio.h>
// void encrypt(char arr[]);
// void decrypt(char arr[]);

// int main(void)
// {
//     char str[100] = "Hello World";
//     encrypt(str);
//     puts(str); // Ifmmp!Xpsme
//     decrypt(str);
//     puts(str);

//     return 0;
// }
// void encrypt(char arr[])
// {
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         arr[i] += 1;
//     }
// }
// void decrypt(char arr[])
// {
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         arr[i] -= 1;
//     }
// }

// 8. Write a program to count the occurrence of a given character in a string.

// #include <stdio.h>
// int charcounter(char str[], char C);
// int main(void)
// {
//     char str[] = "Accenture";
//     printf("%d", charcounter(str, 'c'));
//     return 0;
// }
// int charcounter(char str[], char C)
// {
//     int counter = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == C)
//         {
//             counter++;
//         }
//     }
//     return counter;
// }

// 9. Write a program to check whether a given character is present in a string or not.

// #include <stdio.h>
// int charchecker(char str[], char C);
// int main(void)
// {
//     char ch = 't';
//     char str[] = "Accenture";
//     (charchecker(str, ch)) ? printf("It contains %c", ch) : printf("It does not contain %c", ch);
//     return 0;
// }
// int charchecker(char str[], char C)
// {
//     int flag = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == C)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     return flag;
// }