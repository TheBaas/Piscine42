int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		temp = temp * nb;
		power--;
	}
	return (temp);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(5, 2));
// 	return (0);
// }
