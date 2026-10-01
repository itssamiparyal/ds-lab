#include <stdio.h>

int power(int b, unsigned int n, int m)
{
    int res = 1;       // Initialize result

    b = b % m;         // Update b if it is more than or equal to m

    while (n > 0)
    {
        // If n is odd, multiply b with result
        if (n & 1)
            res = (res * b) % m;

        // n must be even now
        n = n >> 1;    // n = n / 2
        b = (b * b) % m;
    }

    return res;
}

int main()
{
    int b, n, m, result;

    printf("Enter the positive integer b: ");
    scanf("%d", &b);

    printf("Enter the positive integer n: ");
    scanf("%d", &n);

    printf("Enter the positive integer m: ");
    scanf("%d", &m);

    // Calculate the result
    result = power(b, n, m);

    printf("Modulo Power is %d", result);

    return 0;
}