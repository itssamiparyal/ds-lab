#include <stdio.h>

int set[100];   // Array to store unique elements

// Function to check whether an element already exists
int testDuplicateInSet(int x, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(x == set[i])
        {
            return 0;   // Duplicate found
        }
    }

    return 1;   // Unique element
}

int main()
{
    int n, i = 0, x, test;

    printf("Enter the dimension of set: ");
    scanf("%d", &n);

    while(1)
    {
        printf("Enter the element: ");
        scanf("%d", &x);

        if(i == 0)
        {
            set[i] = x;
            i++;
            continue;
        }

        test = testDuplicateInSet(x, i);

        if(test == 1)
        {
            set[i] = x;
            i++;
        }
        else
        {
            printf("The given integer is already in the set.\n");
        }

        if(i == n)
        {
            break;
        }
    }

    printf("\nElements in the set are: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", set[i]);
    }

    return 0;
}