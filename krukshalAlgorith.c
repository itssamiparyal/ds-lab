#include <stdio.h>

int parent[10];

int find(int i)
{
    while(parent[i])
        i = parent[i];

    return i;
}

int uni(int i, int j)
{
    if(i != j)
    {
        parent[j] = i;
        return 1;
    }

    return 0;
}

int main()
{
    int cost[10][10];
    int i, j, u, v, a, b;
    int min, ne = 1;
    int n;
    int mincost = 0;

    printf("\nImplementation of Kruskal's algorithm\n");

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the cost of adjacency matrix:\n");

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);

            if(cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }

    printf("\nThe edges of minimum spanning tree are:\n");

    while(ne < n)
    {
        min = 999;

        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= n; j++)
            {
                if(cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        u = find(u);
        v = find(v);

        if(uni(u, v))
        {
            printf("Edge %d: (%d,%d) = %d\n",
                   ne++, a, b, min);

            mincost += min;
        }

        cost[a][b] = cost[b][a] = 999;
    }

    printf("\nMinimum cost = %d\n", mincost);

    return 0;
}