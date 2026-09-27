/* C Program to Calculate b^n mod m Using Recursion */

#include <stdio.h>

int powerMod(int b, int n, int m)
{
    if (n == 0)
        return 1 % m;

    return (b * powerMod(b, n - 1, m)) % m;
}

int main()
{
    int b, n, m, result;

    printf("Enter base number: ");
    scanf("%d", &b);

    printf("Enter power number: ");
    scanf("%d", &n);

    printf("Enter modulo number: ");
    scanf("%d", &m);

    result = powerMod(b, n, m);

    printf("(%d^%d) mod %d = %d", b, n, m, result);

    return 0;
}