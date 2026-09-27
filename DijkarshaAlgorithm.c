/* C Program to Implement Dijkstra's Algorithm to Find Shortest Path */

#include <stdio.h>

#define Infinity 999

void dijkstra(int n, int v, int cost[10][10], int dist[10])
{
    int i, u, count, w, min;
    int flag[10];

    for (i = 1; i <= n; i++)
    {
        flag[i] = 0;
        dist[i] = cost[v][i];
    }

    flag[v] = 1;
    dist[v] = 0;
    count = 2;

    while (count <= n)
    {
        min = Infinity;

        for (w = 1; w <= n; w++)
        {
            if (dist[w] < min && !flag[w])
            {
                min = dist[w];
                u = w;
            }
        }

        flag[u] = 1;
        count++;

        for (w = 1; w <= n; w++)
        {
            if ((dist[u] + cost[u][w] < dist[w]) && !flag[w])
            {
                dist[w] = dist[u] + cost[u][w];
            }
        }
    }
}

int main()
{
    int n, v, i, j;
    int cost[10][10], dist[10];

    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);

    printf("\nEnter the cost matrix:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);

            if (cost[i][j] == 0)
                cost[i][j] = Infinity;
        }
    }

    printf("\nEnter the source node: ");
    scanf("%d", &v);

    dijkstra(n, v, cost, dist);

    printf("\nShortest Path:\n");

    for (i = 1; i <= n; i++)
    {
        if (i != v)
            printf("%d -> %d = %d\n", v, i, dist[i]);
    }

    return 0;
}