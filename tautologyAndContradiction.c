/* Program: Truth Table for Tautology and Contradiction */

#include <stdio.h>

int AND(int p, int q)
{
    if (p == 1 && q == 1)
        return 1;
    else
        return 0;
}

int OR(int p, int q)
{
    if (p == 1 || q == 1)
        return 1;
    else
        return 0;
}

int NOT(int p)
{
    if (p == 1)
        return 0;
    else
        return 1;
}

int Implication(int p, int q)
{
    if (p == 1 && q == 0)
        return 0;
    else
        return 1;
}

int main()
{
    int p, q;

    /* Tautology */
    printf("TAUTOLOGY\n");
    printf("P\tQ\t(P ^ Q) --> (P V Q)\n");

    for (p = 0; p <= 1; p++)
    {
        for (q = 0; q <= 1; q++)
        {
            printf("%d\t%d\t%d\n",
                   p, q,
                   Implication(AND(p, q), OR(p, q)));
        }
    }

    /* Contradiction */
    printf("\nCONTRADICTION\n");
    printf("P\tQ\t(P V Q) ^ ((~P) ^ (~Q))\n");

    for (p = 0; p <= 1; p++)
    {
        for (q = 0; q <= 1; q++)
        {
            printf("%d\t%d\t%d\n",
                   p, q,
                   AND(OR(p, q), AND(NOT(p), NOT(q))));
        }
    }

    return 0;
}