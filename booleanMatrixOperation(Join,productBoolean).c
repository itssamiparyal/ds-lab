//Program: Implement Boolean Matrix Operations — Join, Product and Boolean Product

#include <stdio.h>

int main()
{
    int first[5][5], second[5][5], join[5][5];
    int product[5][5], i, j, k;
    int r1, c1, r2, c2;

    printf("Enter the number of rows and columns of first matrix:\n");
    scanf("%d%d", &r1, &c1);

    printf("Enter the elements of first matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix:\n");
    scanf("%d%d", &r2, &c2);

    printf("Enter the elements of second matrix:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    printf("The elements of first matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("%d\t", first[i][j]);
        }
        printf("\n");
    }

    printf("The elements of second matrix:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d\t", second[i][j]);
        }
        printf("\n");
    }

    /* Boolean Matrix Product */
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            product[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                product[i][j] =
                    product[i][j] ||
                    (first[i][k] && second[k][j]);
            }
        }
    }

    printf("Boolean Join of the matrices:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            join[i][j] = first[i][j] || second[i][j];
            printf("%d\t", join[i][j]);
        }
        printf("\n");
    }

    printf("Boolean Product of the matrices:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

