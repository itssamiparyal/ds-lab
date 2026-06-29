// 1) Write a program to implement set operation union, intersection, difference and cartesian product.
// Program for difference
#include <stdio.h>

int main()
{
    int a[10], b[10], c[10], d[10];
    int n1, n2;
    int i, j, l;
    int k = 0, m = 0;

    printf("Enter size of Set A: ");
    scanf("%d", &n1);

    printf("Enter elements of Set A:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of Set B: ");
    scanf("%d", &n2);

    printf("Enter elements of Set B:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // A - B
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
                break;
        }

        if(j == n2)
        {
            c[k] = a[i];
            k++;
        }
    }

    // B - A
    for(i = 0; i < n2; i++)
    {
        for(j = 0; j < n1; j++)
        {
            if(b[i] == a[j])
                break;
        }

        if(j == n1)
        {
            d[m] = b[i];
            m++;
        }
    }

    printf("\nA - B = ");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    printf("\nB - A = ");
    for(i = 0; i < m; i++)
        printf("%d ", d[i]);

    return 0;
}