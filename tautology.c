//19. C Program to Prove That (p-->q)^(q-->r)-->(p-->r) Is a Tautology
#include <stdio.h>

int AND(int p, int q)
{
    if (p == 1 && q == 1)
        return 1;
    else
        return 0;
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
    int p, q, r;

    printf("P\tQ\tR\t\t(P-->Q)^(Q-->R)-->(P-->R)\n");

    for (p = 0; p <= 1; p++)
    {
        for (q = 0; q <= 1; q++)
        {
            for (r = 0; r <= 1; r++)
            {
                printf("%d\t%d\t%d\t\t%d\n",
                       p, q, r,
                       Implication(
                           AND(Implication(p, q),
                               Implication(q, r)),
                           Implication(p, r)
                       ));
            }
        }
    }

    return 0;
}