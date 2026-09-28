// 1. Create a two-dimensional vector using structures in C.

// #include <stdio.h>

// struct vector{
//     int x;
//     int y;
// };
// int main(void)
// {
//     struct vector v1 = {2,3};
//     printf("Vector = %di + %dj\n",v1.x,v1.y);
//     return 0;
// }

// 2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
// The vectors must be two–dimensional.

// #include <stdio.h>

// struct vector{
//     int x;
//     int y;
// };

// struct vector sumVector(struct vector v1,struct vector v2);
// int main(void)
// {
//     struct vector v1 = {2,3};
//     struct vector v2 = {5,2};
//     struct vector v = {0};
//     printf("Vector v1= %di + %dj\n",v1.x,v1.y);
//     printf("Vector v2= %di + %dj\n",v2.x,v2.y);
//     v= sumVector(v1,v2);
//     printf("Sum of Vectors = %di + %dj\n",v.x,v.y);
//     return 0;
// }
// struct vector sumVector(struct vector v1,struct vector v2)
// {
//     struct vector v;
//     v.x = v1.x + v2.x;
//     v.y = v1.y + v2.y;
//     return v;
// }

// 3. Twenty integers are to be stored in memory. What will you prefer- Array or 
// structure?
// since the data types are similar i will prefer array in this case.

// 4. Write a program to illustrate the use of arrow operator → in C.

// #include <stdio.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[20];
// };

// int main(void)
// {
//     struct employee e1 = {100,71.22,"ankit"};
//     struct employee *ptr = &e1;
//     printf("Employee details:\n ID:%d\n Salary:%d\n Name:%s\n",ptr->code,ptr->salary,ptr->name);    
//     return 0;
// }

// 5. Write a program with a structure representing a complex number.

// #include <stdio.h>
// typedef struct ComplexNumber
// {
//     int real;
//     int img;
// }cpx;

// int main(void)
// {
//     cpx c1 = {5,7};
//     cpx c2 = {-2,-2};
//     printf("Complex Number c1: %d + %di\n",c1.real,c1.img);
//     return 0;
// }

// // 6. Create an array of 5 complex numbers created in Problem 5 and display them 
// // with the help of a display function. The values must be taken as an input from 
// // the user.

// #include <stdio.h>
// typedef struct ComplexNumber
// {
//     int real;
//     int img;
// }cpx;
// void display(cpx num[],int n);
// int main(void)
// {
//     cpx num[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter real of c%d :\n",i+1);
//         scanf("%d",&num[i].real);
//         printf("Enter imaginary of c%d :\n",i+1);
//         scanf("%d",&num[i].img);
        
//     }
//     display(num,5);
//     return 0;
// }
// void display(cpx num[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Complex Number c%d: ",i+1);
//         printf("%d",num[i].real);
//         printf(" + %di\n",num[i].img);
//     }
    
// }


// 7. Write problem 5’s structure using ‘typedef’ keywords

// 8. Create a structure representing a bank account of a customer. What fields did 
// you use and why?

// #include <stdio.h>

// struct bankAcc
// {
//     int accNo;
//     char name[50];
//     float balance;
//     char accType[20];
// };

// int main(void)
// {
//     struct bankAcc c1 = {01001,"Shibam",25000.00,"Service"};
//     printf("Account Number: %d\n", c1.accNo);
//     printf("Name: %s\n", c1.name);
//     printf("Balance: %.2f\n", c1.balance);
//     printf("Account Type: %s\n", c1.accType);
//     return 0;
// }

// 9. Write a structure capable of storing date. Write a function to compare those 
// dates.

// #include <stdio.h>
// typedef struct date
// {
//     int date;
//     int month;
//     int year;
// }day;
// int compareDate(day d1,day d2);
// int main(void)
// {
//     day d1 = {28, 9, 2026};
//     day d2 = {28, 9, 2026};
//     compareDate(d1,d2) ? printf("Dates are equal") : printf("Dates are not equal");
//     return 0;
// }
// int compareDate(day d1,day d2)
// {
//     int flag = 0;
//     if(d1.year == d2.year && d1.month == d2.month && d1.date == d2.date)
//     {flag = 1;}
//     return flag;
// }

// 10. Solve problem 9 for time using ‘typedef’ keyword.

// #include <stdio.h>

// typedef struct
// {
//     int hour;
//     int minute;
//     int second;
// } Time;

// int compareTime(Time t1, Time t2)
// {
//     if (t1.hour > t2.hour)
//         return 1;

//     if (t1.hour < t2.hour)
//         return -1;

//     if (t1.minute > t2.minute)
//         return 1;

//     if (t1.minute < t2.minute)
//         return -1;

//     if (t1.second > t2.second)
//         return 1;

//     if (t1.second < t2.second)
//         return -1;

//     return 0;
// }

// int main(void)
// {
//     Time t1 = {14, 30, 25};
//     Time t2 = {12, 45, 50};

//     int result = compareTime(t1, t2);

//     if (result == 1)
//         printf("Time 1 is later than Time 2\n");
//     else if (result == -1)
//         printf("Time 1 is earlier than Time 2\n");
//     else
//         printf("Both times are equal\n");

//     return 0;
// }
