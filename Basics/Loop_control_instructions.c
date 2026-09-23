//  Loops are used to repeat a block of code.
// #include <stdio.h>

// int main(void)
// {
//     for(int i = 1; i <= 5; i++)
//     //  initialize - condition - update
//     {
//         printf("Hello world\n");
//     }

//     return 0;
// }

// there are three main loops
// for loop - when no. of iteration is known
// while loop - repeat until the condition remains true
// do-while loop - execute the code at least one time

// #include <stdio.h>

// int main(void)
// {
//     int password;

//     printf("Enter your password:\n");
//     scanf("%d",&password);

//     while (password != 1234)
//     {
//         printf("Wrong password.\nTry Again\n");
//         scanf("%d", &password);
//     }
//     printf("Login scccessful.");

//     return 0;
// }

// do-while is useful to a menu driven program
// #include <stdio.h>

// int main(void)
// {
//     int choice;
//     do
//     {
//         printf("===== BANK MENU =====\n");
//         printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit");

//         scanf("%d", &choice);
//         // perform
//     }
//     while (choice != 4);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int number, count = 0, sum = 0;
//     for(int i = 1; i <= 5; i++)
//     {
//         // printf("%d \n",i);
//         printf("Enter number%d :\n",i);
//         scanf("%d",&number);
//         // count++ ;
//         sum += number;
//     }
//     // printf("%d\n",count);
//     printf("Sum: %d\n",sum);
//     printf("Average: %.2f\n",sum/5.0);

//     return 0;
// }

// Nested loops

// #include <stdio.h>

// int main(void)
// {
//     int num = 1;
//     for(int i = 1; i <= 3; i++)
//     {
//         for(int j = 1; j <=3; j++)
//         {
//             printf("%d ",num);
//             num++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Break - immidiately terminaets the loop
// Continue - skips the current iteration and moves to the next iteration.

// #include <stdio.h>

// int main(void)
// {
//     for(int i = 1; i<=6; i++)
//     {
//         if (i == 5)
//         {
//             // break; // output - 1 2 3 4
//             continue; // output - 1 2 3 4 6
//         }
//         printf("%d ",i);
//     }

//     return 0;
// }

// Infinite Loops
// #include <stdio.h>

// int main(void)
// {
//     while (1)
//     {
//         printf("Hello\n");
//     }

//     return 0;
// }

