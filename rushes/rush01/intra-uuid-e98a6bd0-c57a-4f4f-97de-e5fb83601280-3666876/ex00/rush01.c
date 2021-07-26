void	ft_putchar(char c);

char	g_col1up;
char	g_col2up;
char	g_col3up;
char	g_col4up;

void	grid(int x, int y, char value)
{
	ft_putchar(value);
	if (x != 4)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar ('\n');
	}
}

void	rush(char **argv)
{
	char	resultL_UP;
	int p;
	resultLUP = '1';
	g_col1up = argv[1][0];
	g_col2up = argv[1][2];
	g_col3up = argv[1][4];
	g_col4up = argv[1][6];
	grid(1, 1, resultL_UP);
	grid(2, 1, '2');
	grid(3, 1, '3');
	grid(4, 1, '4');

	grid(1, 2, '2');
	grid(2, 2, '3');
	grid(3, 2, '4');
	grid(4, 2, '1');

	while(argv[1][p] == '1')


	if (col1up == '1' || row1left == '1')
	{
		resultL_UP = '4';
		if(col1up != row1left)
		{
			write(1, "Error", 5);
			return(0);
		}
	}

	ft_putchar(g_col1up);
	ft_putchar(g_col2up);
	ft_putchar(g_col3up);
	ft_putchar(g_col4up);
}
