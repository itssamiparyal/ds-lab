//4) Program to create a function that returns 1 if the element exists in the set and 0 otherwise

#include <stdio.h>

// Function to check whether an element exists in the set
int searchElement(int set[], int n, int x)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(set[i] == x)
        {
            return 1;   // Element found
        }
    }

    return 0;   // Element not found
}

int main()
{
    int set[100];
    int n, i, x;

    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    printf("Enter the elements of the set:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &set[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    if(searchElement(set, n, x))
    {
        printf("%d exists in the set.\n", x);
    }
    else
    {
        printf("%d does not exist in the set.\n", x);
    }

    return 0;
}