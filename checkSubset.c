// 6) Program to check if Set A is a subset of Set B

#include <stdio.h>

int main()
{
    int A[10], B[10];
    int n1, n2;
    int i, j, found;

    printf("Enter the number of elements in Set A: ");
    scanf("%d", &n1);

    printf("Enter the elements of Set A:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the number of elements in Set B: ");
    scanf("%d", &n2);

    printf("Enter the elements of Set B:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &B[i]);
    }

    // Check if every element of A is present in B
    for(i = 0; i < n1; i++)
    {
        found = 0;

        for(j = 0; j < n2; j++)
        {
            if(A[i] == B[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("\nSet A is NOT a subset of Set B.\n");
            return 0;
        }
    }

    printf("\nSet A is a subset of Set B.\n");

    return 0;
}