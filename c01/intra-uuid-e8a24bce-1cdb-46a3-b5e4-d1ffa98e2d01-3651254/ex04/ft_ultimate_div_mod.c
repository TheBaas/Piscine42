void	ft_ultimate_div_mod(int *a, int *b)
{
	int	leftover;

	leftover = *a % *b;
	*a = *a / *b;
	*b = leftover;
}
