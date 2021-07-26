#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*convert_param(char *param)
{
	int	*values;
	int	d;
	int	x;

	values = malloc(sizeof(int) * 4 * 4);
	d = 0;
	x = 0;
	while (param[x] != '\0')
	{
		values[d] = param[x] - '0';
		d++;
		x += 2;
	}
	return (values);
}

int	is_start_possible(int *solutions, int start)
{
	int	highest;
	int	x;
	int	c;

	x = 0;
	c = 0;
	highest = 0;
	while (x < 4)
	{
		if (solutions[x] > highest)
		{
			highest = solutions[x];
			c++;
		}
		x++;
	}
	if (c != start)
		return (0);
	else
		return (1);
}

int	is_end_possible(int *solutions, int end)
{
	int	highest;
	int	x;
	int	c;

	x = 4;
	c = 0;
	highest = 0;
	while (x > 0)
	{
		if (solutions[x] > highest)
		{
			highest = solutions[x];
			c++;
		}
		x--;
	}
	if (c != end)
		return (0);
	else
		return (1);
}

int	is_poss(int *sol, int start, int end)
{
	if (is_start_possible(sol, start) != 1)
		return (0);
	if (is_end_possible(sol, end) != 1)
		return (0);
	return (1);
}

int	check_dup(int *a)
{
	if (a[0] != a[1] || a[0] != a[2] || a[0] != a[3])
		return (1);
	if (a[1] != a[2] || a[1] != a[3])
		return (1);
	if (a[2] != a[3])
		return (1);
	return (0);
}

int	*fill_arr(int a, int b, int c, int d)
{
	int	*array;

	array = malloc(sizeof(int) * 4);
	array[0] = a;
	array[1] = b;
	array[2] = c;
	array[3] = d;
	return (array);
}


void	print_board(int *sol, int **poss)
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			write(1, &poss[sol[x]][y], 1);
			write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

void	assign_arr(int *poss[24])
{
	poss[0] = fill_arr(1, 2, 3, 4);
	poss[1] = fill_arr(1, 2, 4, 3);
	poss[2] = fill_arr(1, 3, 2, 4);
	poss[3] = fill_arr(1, 3, 4, 2);
	poss[4] = fill_arr(1, 4, 2, 3);
	poss[5] = fill_arr(1, 4, 3, 2);
	poss[6] = fill_arr(2, 1, 3, 4);
	poss[7] = fill_arr(2, 1, 4, 3);
	poss[8] = fill_arr(2, 3, 4, 1);
	poss[9] = fill_arr(2, 3, 1, 4);
	poss[10] = fill_arr(2, 4, 1, 3);
	poss[11] = fill_arr(2, 4, 3, 1);
	poss[12] = fill_arr(3, 1, 2, 4);
	poss[13] = fill_arr(3, 1, 4, 2);
	poss[14] = fill_arr(3, 2, 1, 4);
	poss[15] = fill_arr(3, 2, 4, 1);
	poss[16] = fill_arr(3, 4, 1, 2);
	poss[17] = fill_arr(3, 4, 2, 1);
	poss[18] = fill_arr(4, 1, 2, 3);
	poss[19] = fill_arr(4, 1, 3, 2);
	poss[20] = fill_arr(4, 2, 1, 3);
	poss[21] = fill_arr(4, 2, 3, 1);
	poss[22] = fill_arr(4, 3, 1, 2);
	poss[23] = fill_arr(4, 3, 2, 1);
}

int	main(int argc, char **argv)
{
	int	*params;
	int	a[4];
	int	*poss[24];
	int	*sol;

	if (argc != 2)
		return (0);
	params = convert_param(argv[1]);
	assign_arr(poss);
	printf("hello\n");
	while (a[0] < 24)
	{
		if (is_poss(poss[a[0]], params[8], params[12]))
		{
			a[1] = 0;
			while (a[1] < 24)
			{
				if (is_poss(poss[a[1]], params[9], params[13]))
				{
					a[2] = 0;
					while (a[2] < 24)
					{
						if (is_poss(poss[a[2]], params[10], params[14]))
						{
							a[3] = 0;
							while (a[3] < 24)
							{
								if (is_poss(poss[a[3]], params[11], params[15]))
								{
									sol = fill_arr(a[0], a[1], a[2], a[3]);
										print_board(sol, poss);
								}
								a[3]++;
							}
						}
						a[2]++;
					}
				}
				a[1]++;
			}
		}
		a[0]++;
	}
}
