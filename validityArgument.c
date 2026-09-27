/* 21. C Program to Test Validity of Argument
   (P --> Q) ^ (Q --> R) == (Q ^ R)
*/

#include <stdio.h>

int Implication(int p, int q)
{
    if (p == 1 && q == 0)
        return 0;
    else
        return 1;
}

int AND(int p, int q)
{
    if (p == 1 && q == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int p, q, r;
    int premise, conclusion, validity;

    printf("P\tQ\tR\tPremise\t\tConclusion\tResult\n");

    for (p = 0; p <= 1; p++)
    {
        for (q = 0; q <= 1; q++)
        {
            for (r = 0; r <= 1; r++)
            {
                premise = AND(Implication(p, q),
                              Implication(q, r));

                conclusion = AND(q, r);

                validity = Implication(premise, conclusion);

                printf("%d\t%d\t%d\t%d\t\t%d\t\t%d\n",
                       p, q, r, premise, conclusion, validity);
            }
        }
    }

    return 0;
}