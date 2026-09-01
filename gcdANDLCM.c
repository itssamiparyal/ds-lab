// 10) C Program to Find GCD and LCM Using Euclidean Algorithm

#include <stdio.h>

int main()
{
    int a, b;
    int x, y;
    int gcd, lcm;
    int temp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    printf("\nEuclidean Algorithm:\n");

    while (y != 0)
    {
        printf("%d = %d * %d + %d\n",
               x, x / y, y, x % y);

        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    lcm = (a * b) / gcd;

    printf("\nGCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}

