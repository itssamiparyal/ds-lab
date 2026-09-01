//9) C Program to Perform Boolean OR and Boolean Multiplication of Two Matrices

#include <stdio.h>

#define MAX 10

void inputMatrix(int A[MAX][MAX], int r, int c)
{
    int i, j;

    printf("Enter matrix elements (0 or 1):\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}

void displayMatrix(int A[MAX][MAX], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

void booleanOR(int A[MAX][MAX], int B[MAX][MAX],
               int C[MAX][MAX], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] || B[i][j];
        }
    }
}

void booleanMultiply(int A[MAX][MAX], int B[MAX][MAX],
                     int C[MAX][MAX],
                     int r1, int c1, int c2)
{
    int i, j, k;

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;

            for (k = 0; k < c1; k++)
            {
                C[i][j] = C[i][j] ||
                          (A[i][k] && B[k][j]);
            }
        }
    }
}

int main()
{
    int A[MAX][MAX], B[MAX][MAX];
    int C[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("\nEnter Matrix A:\n");
    inputMatrix(A, r1, c1);

    printf("\nEnter Matrix B:\n");
    inputMatrix(B, r2, c2);

    /* Boolean OR is possible only for matrices of the same size */
    if (r1 == r2 && c1 == c2)
    {
        booleanOR(A, B, C, r1, c1);

        printf("\nBoolean OR of the two matrices:\n");
        displayMatrix(C, r1, c1);
    }
    else
    {
        printf("\nBoolean OR is not possible.\n");
    }

    /* Boolean multiplication is possible when c1 == r2 */
    if (c1 == r2)
    {
        booleanMultiply(A, B, C, r1, c1, c2);

        printf("\nBoolean Multiplication of the two matrices:\n");
        displayMatrix(C, r1, c2);
    }
    else
    {
        printf("\nBoolean multiplication is not possible.\n");
    }

    return 0;
}