// 1) Write a program to implement set operation union, intersection, difference and cartesian product.
// Program for cartesian

#include <stdio.h>

void cartesian()
{
    int a[10], b[10], n1, n2;

    printf("***** CARTESIAN PRODUCT *****\n");

    printf("Enter size of Set A: ");
    scanf("%d", &n1);

    printf("Enter elements of Set A:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of Set B: ");
    scanf("%d", &n2);

    printf("Enter elements of Set B:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Logic for Cartesian Product
    printf("{");

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("(%d,%d)", a[i], b[j]);

            if (i != n1 - 1 || j != n2 - 1)
                printf(", ");
        }
    }

    printf("}\n");
}

int main()
{
    cartesian();
    return 0;
}