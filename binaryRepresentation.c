// Program: Compute b^n mod m Using Binary Representation

#include <stdio.h>

int main()
{
    int n, m, b;
    int t[100];
    int i = 0, j;
    int x = 1;
    int power;

    printf("Enter value of n:\n");
    scanf("%d", &n);

    printf("Enter value of b:\n");
    scanf("%d", &b);

    printf("Enter value of m:\n");
    scanf("%d", &m);

    if (m <= 0)
    {
        printf("Modulus m must be greater than 0.");
        return 0;
    }

    /* Converting n into binary */
    if (n == 0)
    {
        t[i++] = 0;
    }
    else
    {
        while (n > 0)
        {
            t[i++] = n % 2;
            n = n / 2;
        }
    }

    printf("The binary representation of n is:\n");

    /* Display binary representation */
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", t[j]);
    }

    printf("\n");

    /* Binary modular exponentiation */
    power = b % m;

    for (j = 0; j < i; j++)
    {
        if (t[j] == 1)
        {
            x = (x * power) % m;
        }

        power = (power * power) % m;
    }

    printf("x = %d\n", x);

    return 0;
}