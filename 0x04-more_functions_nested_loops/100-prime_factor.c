#include <stdio.h>
#include <math.h>

int main(void)
{
    long int n = 612852475143;
    long int i;

    while (n % 2 == 0)
    {
        n /= 2;
    }

    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
        }
    }

    if (n > 2)
    {
        printf("%ld\n", n);
    }

    return 0;
}

