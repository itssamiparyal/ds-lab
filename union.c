#include <stdio.h>

int main()
{
    int a[10], b[10], c[20];
    int i, j, k = 0, n1, n2;

    printf("***** UNION OF SET A AND B *****\n");

    printf("Enter the number of elements in Set A: ");
    scanf("%d", &n1);

    printf("Enter the elements of Set A:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in Set B: ");
    scanf("%d", &n2);

    printf("Enter the elements of Set B:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < k; j++)
        {
            if(c[j] == a[i])
                break;
        }

        if(j == k)
        {
            c[k] = a[i];
            k++;
        }
    }

    // Copy unique elements from Set B
    for(i = 0; i < n2; i++)
    {
        for(j = 0; j < k; j++)
        {
            if(c[j] == b[i])
                break;
        }

        if(j == k)
        {
            c[k] = b[i];
            k++;
        }
    }

    printf("\nUnion of Set A and Set B is: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}