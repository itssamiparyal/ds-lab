/* C Program to Implement Linear Search Algorithm Using Recursion */

#include <stdio.h>

int LinSearch(int a[], int l, int r, int key)
{
    if (l > r)
        return -1;

    if (a[l] == key)
        return l;

    return LinSearch(a, l + 1, r, key);
}

int main()
{
    int n;
    int a[100];
    int i, key;
    int index;

    printf("Enter the size of list: ");
    scanf("%d", &n);

    printf("\nEnter the elements of list: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the key to be searched: ");
    scanf("%d", &key);

    index = LinSearch(a, 0, n - 1, key);

    if (index != -1)
        printf("Element %d is present at index %d", key, index);
    else
        printf("Element %d is not present", key);

    return 0;
}