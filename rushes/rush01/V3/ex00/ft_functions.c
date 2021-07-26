int		is_poss(int soll[4], int begin, int end);

int	is_begin_possible(int *results, int begin)
{
	int	highest;
	int	x;
	int	counterr;

	x = 0;
	counterr = 0;
	highest = 0;
	while (x < 4)
	{
		if (results[x] > highest)
		{
			highest = results[x];
			counterr++;
		}
		x++;
	}
	if (counterr != begin)
		return (0);
	else
		return (1);
}

int	is_end_possible(int *results, int end)
{
	int	highest;
	int	x;
	int	counterr;

	x = 3;
	counterr = 0;
	highest = 0;
	while (x >= 0)
	{
		if (results[x] > highest)
		{
			highest = results[x];
			counterr++;
		}
		x--;
	}
	if (counterr != end)
		return (0);
	else
		return (1);
}

int	is_poss(int soll[4], int beg
in, int end)
{
	if (is_begin_possible(soll, begin) != 1)
	{
		return (0);
	}
	if (is_end_possible(soll, end) != 1)
	{		
		return (0);
	}
	return (1);
}
