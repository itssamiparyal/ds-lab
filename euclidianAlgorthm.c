//### 12) C Program to Implement Extended Euclidean Algorithm
#include <stdio.h>

int extendedGCD(int a, int b, int *x, int *y)
{
    int x1, y1;
    int gcd;

    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }

    gcd = extendedGCD(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return gcd;
}

int main()
{
    int a, b;
    int x, y;
    int gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    gcd = extendedGCD(a, b, &x, &y);

    printf("\nGCD = %d\n", gcd);
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("\nBezout Identity:\n");
    printf("%d(%d) + %d(%d) = %d\n",
           a, x, b, y, gcd);

    return 0;
}

