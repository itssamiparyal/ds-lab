//11) C Program to Check Prime Number and Find Prime Factorization

#include <stdio.h>

int main()
{
    int n, i;
    int prime = 1;
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    number = n;

    /* Check whether the number is prime */
    if (n < 2)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);

        if (number > 1)
        {
            printf("Prime factorization: ");

            for (i = 2; i <= number; i++)
            {
                while (number % i == 0)
                {
                    printf("%d ", i);
                    number = number / i;
                }
            }

            printf("\n");
        }
    }

    return 0;
}

