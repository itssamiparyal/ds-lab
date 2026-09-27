//18. C Program to Print Truth Table of IMPLICATION Operation
#include <stdio.h>

int Implication(int a, int b);

int main()
{
    int a, b;

    printf("A\tB\tA-->B\n\n");

    for (a = 0; a <= 1; a++)
    {
        for (b = 0; b <= 1; b++)
        {
            printf("%d\t%d\t%d\n\n", a, b, Implication(a, b));
        }
    }

    return 0;
}

int Implication(int a, int b)
{
    if (a == 1 && b == 0)
        return 0;
    else
        return 1;
}