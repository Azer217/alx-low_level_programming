#include <stdio.h>

/**
 * @largest_prime_factor : prints the largest prime factor of the number
 *  return 0
 */

int main(void)
{
	long long int number = 612852475143;
	long long int factor = 2;
	long long int largest_prime_factor = 0;

	while (number != 1)
	{
		if (number % factor == 0)
		{
			number /= factor;
			if (factor > largest_prime_factor)
			{
				largest_prime_factor = factor;
			}
		}
		else
		{
			factor++;
		}
	}

	printf("%lld\n", largest_prime_factor);
	return (0);
}
