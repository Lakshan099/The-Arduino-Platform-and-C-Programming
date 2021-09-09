#include <stdio.h>

int main()
{

    int x = 0, y = 1, fiboNum = 0;
    printf("Fibonacci sequence: ");
    printf("%i%i", x, y);

    for (int i = 0; i < 4; i++)
    {
        fiboNum = x + y;
        x = y;
        y = fiboNum;
        printf("%i", fiboNum);
    }
}