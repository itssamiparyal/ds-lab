// Program: Print Truth Tables of AND, OR and NOT Operations

#include <stdio.h>

int AND(int a, int b);
int OR(int a, int b);
int NOT(int a);

int main()
{
    int a, b;

    // AND Truth Table
    printf("AND Truth Table\n");
    printf("A\tB\tA AND B\n");

    for (a = 0; a <= 1; a++)
    {
        for (b = 0; b <= 1; b++)
        {
            printf("%d\t%d\t%d\n", a, b, AND(a, b));
        }
    }

    // OR Truth Table
    printf("\nOR Truth Table\n");
    printf("A\tB\tA OR B\n");

    for (a = 0; a <= 1; a++)
    {
        for (b = 0; b <= 1; b++)
        {
            printf("%d\t%d\t%d\n", a, b, OR(a, b));
        }
    }

    // NOT Truth Table
    printf("\nNOT Truth Table\n");
    printf("A\tNOT A\n");

    for (a = 0; a <= 1; a++)
    {
        printf("%d\t%d\n", a, NOT(a));
    }

    return 0;
}

// AND Function
int AND(int a, int b)
{
    if (a == 1 && b == 1)
        return 1;
    else
        return 0;
}

// OR Function
int OR(int a, int b)
{
    if (a == 1 || b == 1)
        return 1;
    else
        return 0;
}

// NOT Function
int NOT(int a)
{
    if (a == 1)
        return 0;
    else
        return 1;
}