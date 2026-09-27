// structures ---
// a collection of variables of differ ent types under a single name

// #include <stdio.h>
// #include<string.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[20];
// };
// int main(void)
// {
//     struct employee e1;
//     e1.code = 4656987;
//     e1.salary = 1500000.00;
//     strcpy(e1.name,"Ashish");

//     struct employee e2;
//     e2.code = 8998987;
//     e2.salary = 980000.00;
//     strcpy(e2.name,"Anish");

//     struct employee e3;
//     e3.code = 4689987;
//     e3.salary = 255000.00;
//     strcpy(e3.name,"Ankita");

//    printf("e1 code  = %d\n",e3.code);
//    printf("e1 salary  = %.2f\n",e3.salary);
//    printf("e1 name  = %s\n",e3.name);

//     return 0;
// }

// we can create the data types in the employee structure seperately but when the
// number of properties in a structure increases, it becomes for us to create data
// varibles without structure.
// 1. Structures keep the data organized.
// 2. Structures make data management easy for the programmer.

// Array of structure ---
// #include <stdio.h>
// #include<string.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[20];
// };

// int main(void)
// {
//     // struct employee facebook[100];
//     // facebook[0].code = 100;
//     // facebook[1].code = 101;

//     struct employee harry = {100,71.22,"harry"};
//     // struct employee ankit = {0};
//     // printf("%d,%f,%s\n",harry.code,harry.salary,harry.name);
//     struct employee *ptr;
//     ptr = &harry;
//     printf("%d\n", (*ptr).code); // pointer to structures
//     printf("%.2f\n",ptr->salary);
//     return 0;
// }

// Stuctures in memory ---
// structured are store in contiguous memory location

// Passing structure to a function

#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
typedef struct Complex
{
    float real;
    float img;
} cpx;

void show(struct employee e)
{
    printf("%d,%f,%s\n", e.code, e.salary, e.name);
}
int main(void)
{
    struct employee e1 = {5665, 89789.56, "Hello"};
    show(e1);
    return 0;
}