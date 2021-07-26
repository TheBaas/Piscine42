void	ft_putchar(char c);

void	grid(int x, int y, char value)
{
	ft_putchar(value);
	if (x != 4)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('\n');
	}
}

void	rush(**argv)
{
	char	col1up;
	char	col2up;
	char	col3up;
	char	col4up;


	col1up = argv[1][0];
	col2up = argv[1][2];
	col3up = argv[1][4];
	col4up = argv[1][6];
	grid(1, 1, '1');
	grid(2, 1, '2');
	grid(3, 1, '3');
	grid(4, 1, '4');
	ft_putchar(col1up);
	ft_putchar(col2up);
	ft_putchar(col3up);
	ft_putchar(col4up);
}
