//5) Program to generate the Power Set of a given set

#include <stdio.h>

int main()
{
    int set[10], n;
    int i, j;

    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    printf("Enter the elements of the set:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &set[i]);
    }

    printf("\nPower Set:\n");

    // There are 2^n subsets
    for(i = 0; i < (1 << n); i++)
    {
        printf("{ ");

        for(j = 0; j < n; j++)
        {
            if(i & (1 << j))
            {
                printf("%d ", set[j]);
            }
        }

        printf("}\n");
    }

    return 0;
}