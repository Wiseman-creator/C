// Random number --- rand()
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL)); // sets the starting point using the current time
    int num = rand();
    // rand() % (max - min + 1) + min
    int num1 = rand() % (100) + 1;
    printf("%d\n", num);
    printf("%d", num1);

    return 0;
}