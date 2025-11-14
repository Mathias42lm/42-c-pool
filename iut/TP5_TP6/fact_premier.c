#include <stdio.h>

int	is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

void	print_prime_factors(int n)
{
	int	i;
	int	first;

	i = 2;
	first = 1;
	printf("%d :", n);
	while (i <= n)
	{
		if (is_prime(i) && n % i == 0)
		{
			if (!first)
				printf(" ");
			printf("%d", i);
			first = 0;
			while (n % i == 0)
				n /= i;
		}
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	n;

	printf("Entrez un entier n : ");
	if (scanf("%d", &n) != 1 || n <= 1)
	{
		printf("Valeur invalide.\n");
		return (1);
	}
	print_prime_factors(n);
	return (0);
}
