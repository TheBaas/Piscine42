extern int		g_poss[24][4];
int				is_poss(int soll[4], int begin, int end);
void			ft_putint(int i);
void			ft_putchar(char a);

int	check_dup(int *a)
{
	if (a[0] == a[1] || a[0] == a[3] || a[0] == a[2])
	{
		return (1);
	}
	if (a[1] == a[2] || a[1] == a[3])
		return (1);
	if (a[2] == a[3])
		return (1);
	return (0);
}

int	ft_checkvertical_last_two(int *inputt, int counters[4])
{
	int	column[4];

	column[0] = g_poss[counters[0]][2];   // stop counters counters[0] dit is i...
	// in g_poss zodat je de goede g_poss print en stop dit in collumn
	column[1] = g_poss[counters[1]][2];
	column[2] = g_poss[counters[2]][2];
	column[3] = g_poss[counters[3]][2];
	if (is_poss(column, inputt[2], inputt[6]) \
	!= 1 || check_dup(column) == 1)
		return (0);
	column[0] = g_poss[counters[0]][3];
	column[1] = g_poss[counters[1]][3];
	column[2] = g_poss[counters[2]][3];
	column[3] = g_poss[counters[3]][3];
	if (is_poss(column, inputt[3], inputt[7]) \
	 != 1 || check_dup(column) == 1)
		return (0);
	return (1);
}

int	ft_checkvertical(int *inputt, int counters[4])
{
	int	column[4];

	column[0] = g_poss[counters[0]][0];
	column[1] = g_poss[counters[1]][0];
	column[2] = g_poss[counters[2]][0];
	column[3] = g_poss[counters[3]][0];
	if (is_poss(column, inputt[0], inputt[4]) \
	!= 1 || check_dup(column) == 1)
		return (0);
	column[0] = g_poss[counters[0]][1];
	column[1] = g_poss[counters[1]][1];
	column[2] = g_poss[counters[2]][1];
	column[3] = g_poss[counters[3]][1];
	if (is_poss(column, inputt[1], inputt[5]) \
	!= 1 || check_dup(column) == 1)
		return (0);
	if (ft_checkvertical_last_two(inputt, counters) == 0)
		return (0);
	return (1);
}

void	ft_print_line(int r)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		ft_putint(g_poss[r][i]);
		if (i != 3)
			ft_putchar(' ');
		else
			ft_putchar('\n');
		i++;
	}
}
