#include <stdio.h>
#include <math.h>
/**

 */
int main()
{
	long int num = 612852475143;
	long int factor = -1;
	long int i;

	while (num % 2 == 0)
	{
		factor = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			factor = i;
			num /= i;
		}
	}
	if (num > 2)
	{
		factor = num;
	}
	printf("%ld\n", factor);
	return (0);
}
