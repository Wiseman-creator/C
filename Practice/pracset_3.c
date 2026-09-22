//  What will be the output of this program
// int a = 10;
// if (a = 11)
//      printf("I am 11");
// else
//      printf("I am not 11");

// output
// I am 11 , = is an assignment operator
// in C any non-zero value is treated as true

// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.

#include <stdio.h>

int main(void)
{
    int reqd_total = 40, pass_marks = 33;
    int s1, s2, s3, avg;

    printf("Enter your marks in subject1:\n");
    scanf("%d", &s1);
    printf("Enter your marks in subject2:\n");
    scanf("%d", &s2);
    printf("Enter your marks in subject3:\n");
    scanf("%d", &s3);

    avg = (s1 + s2 + s3) / 3;
    if ((s1 < 0 || s1 > 100) || (s2 < 0 || s2 > 100) || (s3 < 0 || s3 > 100))
    {
        printf("Invalid marks!");
    }
    else if (avg >= reqd_total && s1 >= pass_marks && s2 >= pass_marks && s3 >= pass_marks)
    {
        printf("You Passed!");
    }
    else
    {
        printf("You failed!");
    }

    return 0;
}

// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
// Income Slab      Tax
// 2.5 – 5.0L       5%
// 5.0L - 10.0L     20%
// Above 10.0L      30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.
#include <stdio.h>

int main(void)
{
    double income;

    printf("Enter your income:\n");
    scanf("%lf", &income);

    if (income > 1000000)
    {
        printf("Income tax amount: %.2f\n", income * 0.30);
    }
    else if (income >= 500000)
    {
        printf("Income tax amount: %.2f\n", income * 0.20);
    }
    else if (income >= 250000)
    {
        printf("Income tax amount: %.2f\n", income * 0.05);
    }
    else
    {
        printf("No income tax to be paid.\n");
    }

    return 0;
}

//  Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.

#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter year:\n");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}

// Write a program to determine whether a character entered by the user is
// lowercase or not.

#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character:");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase character.", ch);
    }
    else
    {
        printf("%c is a not lowercase character.", ch);
    }

    return 0;
}

// Write a program to find greatest of four numbers entered by the user.
#include <stdio.h>

int main(void)
{
    float a, b, c, d;
    printf("Enter four number:\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("%.2f is the greatest number.", a);
    }
    else if (b >= c && b >= d)
    {
        printf("%.2f is the greatest number.", b);
    }
    else if (c >= d)
    {
        printf("%.2f is the greatest number.", c);
    }
    else
    {
        printf("%.2f is the greatest number.", d);
    }

    return 0;
}