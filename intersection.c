// 1) Write a program to implement set operation union, intersection, difference and cartesian product.
// Program for intersection

#include <stdio.h>

int main()
{
    int a[100], b[100], c[100];
    int n1, n2, k = 0, i, j, l;

    printf("******** INTERSECTION OF SET A AND B ********\n");

    printf("Enter number of elements of Set A: ");
    scanf("%d", &n1);

    printf("Enter elements of Set A:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements of Set B: ");
    scanf("%d", &n2);

    printf("Enter elements of Set B:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Find intersection
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                // Check if already stored
                for(l = 0; l < k; l++)
                {
                    if(c[l] == a[i])
                        break;
                }

                if(l == k)
                {
                    c[k] = a[i];
                    k++;
                }
                break;
            }
        }
    }

    printf("\nIntersection of Set A and Set B is: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}