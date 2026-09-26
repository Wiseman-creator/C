// String ----
// string is a charecter array ending with a special charecter '\0'

// #include <stdio.h>

// int main(void)
// {
//     int len = 7;
//     char name1[60] = {'S', 'H', 'I', 'B', 'A', 'M', '\0'};
//     char name2[] = "Shibam";

//     for (int i = 0; name1[i] != '\0'; i++)
//     {
//         printf("%c\t", name1[i]);
//     }
//     printf("\n");
//     //  Reverseing a string
//     // for (int i = len - 1; i >= 0; i--)
//     // {
//     //     printf("%c\t", name1[i]);
//     // }

//     return 0;
// }

// Charecter vs string
// charecter uses single quotes
// string uses double quotes (it automatically adds '\0' in the end)
// char name[20]; this creates space up to 19 characters + '\0'
// char name[] = "Shibam"; c determines the reqd size automatically

// char name[20] = "Shibam"
// here array size is 20 ( sizeof(name) = 20 )
// but string length 6 ( strlen(name) = 6 )

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     int len = 7;
//     char name[] = "Shibam";
//     char subject[50];

//     // printf("Enter subject name: ");
//     // // fgets syntax ----
//     // // fgets(str,sizeof(str),stdin);
//     // fgets(subject,50,stdin);
//     // puts(subject);

//     // strlen()
//     printf("%d\n", strlen(name));

//     // strcpy()
//     char dest[60];
//     strcpy(dest, name);
//     // care must be taken about enough space of destination
//     puts(dest);

//     // strcat() --- joining strings
//     char last[] = " Mallick";
//     strcat(dest,last);
//     puts(dest);

//     // strcmp() --- compare strings
//      strcmp("far", "joke");
//      // Negative value
//      strcmp("joke", "far");
//      // Positive value
//     return 0;
// }

// Declairing a string using pointers
// char *ptr = "Shibam";
// 1. Once a string is defined using char st [] = “shibam”, it cannot be reinitialized to
// something else.
// 2. A string defined using pointers can be reinitialized.

// 2D charecter arrays

// #include <stdio.h>

// int main(void)
// {
//     char names[5][20] = {
//         "Shibam",
//         "Rahul",
//         "Amit",
//         "Priya",
//         "Ankit"};

//     printf("%s\n", names[4]);
//     for (int i = 0; i < 5; i++)
//     {
//         puts(names[i]);
//     }

//     return 0;
// }

// Input/Output of multiple strings

// #include <stdio.h>

// int main(void)
// {
//     char names[5][20];

//     for (int i = 0; i < 5; i++)
//     {
//         fgets(names[i],20,stdin);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         puts(names[i]);
//     }

//     return 0;
// }

// Sorting strings ---

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char names[5][20] = {
//         "Shibam",
//         "Amit",
//         "Rahul",
//         "Ankit",
//         "Priya"};

//     for (int i = 0; i < 5 - 1; i++)
//     {
//         for (int j = 0; j < 5 - i - 1; j++)
//         {
//             if (strcmp(names[j], names[j + 1]) > 0)
//             {
//                 char temp[20];

//                 strcpy(temp, names[j]);
//                 strcpy(names[j], names[j + 1]);
//                 strcpy(names[j + 1], temp);
//             }
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         puts(names[i]);
//     }

//     return 0;
// }