// decision making instructions in C
    // if-else statement
    // switch statement

// If-else statement

// The syntax of an if-else statement in C looks like: 
// if (condition_to_be_checked) { 
// // Statements if condition is true 
// } else { 
// // Statements if condition is false 
// }

// #include <stdio.h>

// int main(void)
// {
//     int a = 23;
//     if (a >= 23)
//     {
//         printf("you can drive!\n");
//     }

//     return 0;
// }

// Relational operators
// used to evaluate conditions (true r false) inside the if statements.
// eg. <,>,<=,>=,=,!=

// Logical operators
// &&(AND), ||(OR), !(NOT)

// 1. && (AND) → is true when both the conditions are true  
// a. “1 and 0” is evaluated as false. 
// b. “0 and 0” is evaluated as false. 
// c. “1 and 1” is evaluated as true. 
// 2. || (OR) → is true when at least one of the conditions is true. (1 or 0 → 1) (1 or 1 → 1) 
// 3. ! (NOT) → returns true if given false and false if given true 
// a. !(3==3) → evaluates to false  
// b. !(3>30) → evaluates to true.

// Else-if clause

// if{ 
// // Statements 
// } 
// else if{ 
// // Statements 
// } 
// else{ 
// // Statements 
// } 

// OPERATOR PRECEDENCE 

// 1st            !                                        
// 2nd         *, /, %                                                                    
// 3rd           +, -                                                                           
// 4th        <>, <=, >=                                                                         
// 5th          ==, !=                                       
// 6th            &&                                                                       
// 7th            ||                                                                       
// 8th            =                                                                       

// Conditional Operators
// condition ? expression-if-true : expression-if-false 
// Here "?" and ":" are called Ternary Operators 

// Switch-Case

// switch (integer expression) 
// { 
// case c1: 
//  // code; 
// case c2:                     
//               // c1, c2 & c3 -> Constants 
//  // code;                
//               // code -> Any valid C code. 
// case c3: 
//  // code: 
// default: 
//  // code; 
// } 