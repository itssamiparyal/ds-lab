//Program: Find Union and Intersection of Two Sets Using Bit String Representation
#include <stdio.h>

#define SIZE 10

int main()
{
    int i, j, k, t;

    int U[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int A[SIZE] = {1, 3, 4, 5, 7};
    int B[SIZE] = {1, 2, 4, 6, 8, 10};

    int SA[SIZE];
    int SB[SIZE];
    int US[SIZE];
    int CS[SIZE];
    int DS[SIZE];
    int C[SIZE];
    int D[SIZE];

    /* Bit String representation of Universal Set */
    for (i = 0; i < SIZE; i++)
    {
        US[i] = 1;
    }

    printf("The Bit String representation of Universal Set:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", US[i]);
    }

    printf("\n\n");

    /* Finding Bit String for Set A */
    for (i = 0; i < SIZE; i++)
    {
        t = 0;

        for (j = 0; j < SIZE; j++)
        {
            if (A[j] == U[i])
            {
                t = 1;
                break;
            }
        }

        if (t == 1)
        {
            SA[i] = 1;
        }
        else
        {
            SA[i] = 0;
        }
    }

    printf("The Bit String representation of Set A:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", SA[i]);
    }

    printf("\n\n");

    /* Finding Bit String for Set B */
    for (i = 0; i < SIZE; i++)
    {
        t = 0;

        for (j = 0; j < SIZE; j++)
        {
            if (B[j] == U[i])
            {
                t = 1;
                break;
            }
        }

        if (t == 1)
        {
            SB[i] = 1;
        }
        else
        {
            SB[i] = 0;
        }
    }

    printf("The Bit String representation of Set B:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", SB[i]);
    }

    printf("\n\n");

    /* Computing Union */
    for (i = 0; i < SIZE; i++)
    {
        if (SA[i] == 1 || SB[i] == 1)
        {
            CS[i] = 1;
        }
        else
        {
            CS[i] = 0;
        }
    }

    k = 0;

    for (i = 0; i < SIZE; i++)
    {
        if (CS[i] == 1)
        {
            C[k] = U[i];
            k++;
        }
    }

    printf("The Union Set is:\n");

    for (i = 0; i < k; i++)
    {
        printf("%d ", C[i]);
    }

    printf("\n\n");

    /* Computing Intersection */
    for (i = 0; i < SIZE; i++)
    {
        if (SA[i] == 1 && SB[i] == 1)
        {
            DS[i] = 1;
        }
        else
        {
            DS[i] = 0;
        }
    }

    k = 0;

    for (i = 0; i < SIZE; i++)
    {
        if (DS[i] == 1)
        {
            D[k] = U[i];
            k++;
        }
    }

    printf("The Intersection Set is:\n");

    for (i = 0; i < k; i++)
    {
        printf("%d ", D[i]);
    }

    printf("\n");

    return 0;
}