// Function ---> A function is block of code which performs a particular tasks.
// It is a way to break our code into chunks so that it is possible for a programmer to reuse them.

#include <stdio.h>

// function prototype --- informs the compiler about a function that will be defined later in the program.
void display();

int main(void)
{
    int a;
    display(); // function call
    // it instructs the compiler to execute the function's body when the call is made.

    return 0;
}

// Function definition
// This part contains the exact set of instructions executed during the function call.

// When a function is called from main(), the main function pauses and temporarily
// suspends. During this time, control transfers to the called function. Once the function
// finishes executing, main() resumes

void display()
{
    printf("Hi i am display\n");
}

// • Execution of a C program starts from main().
// • A C program can have more than one function.
// • Every function gets called directly or indirectly from main().

// Types of functions --->
// There are two functions in C
// 1. Library functions → Commonly required functions grouped together in a library file on disk.
// 2. User defined function → These are the functions declared and defined by the user.

// Uses of function ---
// 1. To avoid rewriting the same logic again and again.
// 2. To keep track what are we doing in a program.
// 3. To test and check logic independently.

// Passing values to a function ---
// int sum (int a, int  b)
// a function prototype is a decleration of a function that specifies its name,return type, parameters
// but does not include the function body

// NOTE:
// 1. Parameters are the values or variable placeholders in the function definition.Example a & b.
// 2. Arguments are the actual values passed to the function to make a call. Example  2 & 3.
// 3. A function can return only one value at a time.
// 4. If the passed variable is changed inside the function, the function call doesn’t
// change the value in the calling function.
// int change(int a) {
// a = 77;
// return 0;
// }
// ‘change’ is a function which pretends to change ‘a’ to 77. Now if we call it from main like this
// int b=22;
// change(b);   // The value of b remains 22
// printf("b is %d", b);   // Prints "b is 22"
// This happens because a copy of ‘b’ is passed to the change function

// RECURSION
// when a function calls itself , it is called recursion.

int factorial(int x)
{
    int f;
    if (x == 0 || x == 1) // base case
    {
        return 1;
    }
    else
    {
        f = x * factorial(x - 1);
        return f;
    }
}

// IMPORTANT NOTES:
// 1. Recursion is often a direct way to implement certain algorithms, but not
// always the most direct for every algorithm. Recursion is particularly suited for
// problems that can be divided into smaller, similar subproblems (like factorial
// computation or tree traversal), but for some algorithms, iterative approaches
// might be more straightforward or efficient.
// 2. The condition in a recursive function that stops further recursion is called
// the base case. This correction clarifies that the base case is crucial as it
// prevents infinite recursion and ensures the function terminates correctly.
// 3. Sometimes, due to an oversight by the programmer, a recursive function can
// continue to run indefinitely without reaching a base case, potentially
// causing a stack overflow or memory error. This statement highlights the risk of
// infinite recursion and its consequences, emphasizing the importance of properly
// defining base cases in recursive functions.