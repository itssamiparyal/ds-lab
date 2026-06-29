// 3) Program to accept N elements into an array but only add them if they aren't already present in the set (No Duplicates)

#include <stdio.h>

int main()
{
    int set[100];
    int n, i, j, x;
    int count = 0;
    int duplicate;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);

        duplicate = 0;

        // Check if the element already exists
        for(j = 0; j < count; j++)
        {
            if(set[j] == x)
            {
                duplicate = 1;
                break;
            }
        }

        if(duplicate == 0)
        {
            set[count] = x;
            count++;
        }
        else
        {
            printf("Duplicate element! Not added.\n");
        }
    }

    printf("\nElements in the set are:\n");

    for(i = 0; i < count; i++)
    {
        printf("%d ", set[i]);
    }

    return 0;
}