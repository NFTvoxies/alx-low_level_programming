#include <stdio.h>

int main(void)
{
    long int n = 612852475143;
    long int i, largest_prime_factor;

    while (n % 2 == 0)
    {
        n /= 2;
        largest_prime_factor = 2;
    }

    for (i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
            largest_prime_factor = i;
        }
    }

    if (n > 2)
    {
        largest_prime_factor = n;
    }

    printf("%ld\n", largest_prime_factor);

    return 0;
}

