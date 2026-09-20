//  Write a C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.

#include <stdio.h>

int main(void)
{
    float length = 1, width = 1;
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of the rectangle: %.2f\n", length * width);

    return 0;
}

//  Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height

#include <stdio.h>

int main(void)
{
    float radius = 1.1, height = 2;

    printf("The area of the circle is %.2f\n", 2 * (3.14) * radius);
    printf("Volume of the cylinder is %.2f\n", (3.14) * radius * radius * height);

    return 0;
}

// Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit).

#include <stdio.h>

int main(void)
{
    float celcius, fahrenheit;
    printf("Enter the value in celcius scale:\n");
    scanf("%f", &celcius);
    fahrenheit = celcius * (9.0 / 5.0) + 32;
    printf("In fahrenheit scale:%.2f", fahrenheit);

    return 0;
}

// Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

#include <stdio.h>

int main(void)
{
    int principal = 1000, no_of_year = 3;
    float rate = 7.5;
    printf("Simple Interest: %.2f", (principal * rate * no_of_year) / 100.0);

    return 0;
}