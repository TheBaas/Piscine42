int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		temp = temp * nb;
		nb--;
	}
	return (temp);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(0));
// 	return (0);
// }
