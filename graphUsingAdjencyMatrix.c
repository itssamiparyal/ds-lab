/* 23. C Program to Represent a Graph Using Adjacency Matrix */

#include <stdio.h>
#include <stdlib.h>

int readgraph(int adjmat[50][50], int n);
int dirgraph();
int undirgraph();

int main()
{
    int option;

    do
    {
        printf("\nA Program to Represent a Graph Using Adjacency Matrix\n");
        printf("\n1. Directed Graph");
        printf("\n2. Un-Directed Graph");
        printf("\n3. Exit");
        printf("\nSelect a proper option: ");

        scanf("%d", &option);

        switch (option)
        {
            case 1:
                dirgraph();
                break;

            case 2:
                undirgraph();
                break;

            case 3:
                exit(0);

            default:
                printf("\nInvalid option!");
        }

    } while (1);

    return 0;
}

int dirgraph()
{
    int adjmat[50][50];
    int n, i, j;
    int indeg, outdeg;

    printf("\nHow Many Vertices? : ");
    scanf("%d", &n);

    readgraph(adjmat, n);

    printf("\nVertex\tInDegree\tOutDegree\tTotalDegree");

    for (i = 0; i < n; i++)
    {
        indeg = 0;
        outdeg = 0;

        for (j = 0; j < n; j++)
        {
            if (adjmat[j][i] == 1)
                indeg++;

            if (adjmat[i][j] == 1)
                outdeg++;
        }

        printf("\n%d\t%d\t\t%d\t\t%d",
               i + 1, indeg, outdeg, indeg + outdeg);
    }

    return 0;
}

int undirgraph()
{
    int adjmat[50][50];
    int n, i, j;
    int deg;

    printf("\nHow Many Vertices? : ");
    scanf("%d", &n);

    readgraph(adjmat, n);

    printf("\nVertex\tDegree");

    for (i = 0; i < n; i++)
    {
        deg = 0;

        for (j = 0; j < n; j++)
        {
            if (adjmat[i][j] == 1)
                deg++;
        }

        printf("\n%d\t%d", i + 1, deg);
    }

    return 0;
}

int readgraph(int adjmat[50][50], int n)
{
    int i, j;
    char reply;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                adjmat[i][j] = 0;
                continue;
            }

            printf("\nVertices %d & %d are Adjacent? (Y/N): ",
                   i + 1, j + 1);

            scanf(" %c", &reply);

            if (reply == 'Y' || reply == 'y')
                adjmat[i][j] = 1;
            else
                adjmat[i][j] = 0;
        }
    }

    return 0;
}