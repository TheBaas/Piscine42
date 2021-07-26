#include <stdlib.h>
#include <unistd.h>

void	ft_putint(int i);
void	ft_putchar(char a);
void	ft_putstr(char *str);
void	ft_print_board(int r1, int r2, int r3, int r4);
int		ft_strlen(char *str);
int		is_begin_possible(int *results, int begin);
int		is_end_possible(int *results, int end);
int		is_poss(int soll[4], int begin, int end);
int		ft_checkvertical_last_two(int *inputt, int counters[4]);
int		ft_checkvertical(int *inputt, int counters[4]);

int	g_array[4][4] = {{0}};
int	g_poss[24][4] = {
{1, 2, 3, 4},
{1, 2, 4, 3},
{1, 3, 2, 4},
{1, 3, 4, 2},
{1, 4, 2, 3},
{1, 4, 3, 2},
{2, 1, 3, 4},
{2, 1, 4, 3},
{2, 3, 4, 1},
{2, 3, 1, 4},
{2, 4, 1, 3},
{2, 4, 3, 1},
{3, 1, 2, 4},
{3, 1, 4, 2},
{3, 2, 1, 4},
{3, 2, 4, 1},
{3, 4, 1, 2},
{3, 4, 2, 1},
{4, 1, 2, 3},
{4, 1, 3, 2}, 
{4, 2, 1, 3},
{4, 2, 3, 1},
{4, 3, 1, 2},
{4, 3, 2, 1}
};

int	ft_backtracking(int *inputt)
{
	const int	count = 24;
	int			counters[4]; // rows
	int			i;
	int			j;
	int			k;
	int			l;

	i = 0;
	while (i < count)
	{
		if (is_poss(g_poss[i], inputt[8], inputt[12]) == 1)
		{
			j = 0;
			while (j < count)
			{
				if (is_poss(g_poss[j], inputt[9], inputt[13]) == 1)
				{
					k = 0;
					while (k < count)
					{
						if (is_poss(g_poss[k], inputt[10], inputt[14]) == 1)
						{	
							l = 0;
							while (l < count)
							{
								if (is_poss(g_poss[l], inputt[11], inputt[15]) \
								 == 1)
								{
									counters[0] = i; //rows
									counters[1] = j;
									counters[2] = k;
									counters[3] = l;
									if (ft_checkvertical(inputt, counters) == 1)
									{
										ft_print_board(i, j, k, l); 
											return (1);// give row1 row 2 row 3 and row 4
									}
								}
								l++;
							}
						}
						k++;
					}	
				}
				 j++;
			}
		}
		i++;
	}
	return(0);
}

int	*ft_convert_argv(char *argv)
{
	int	*tab;
	int	j;
	int	k;

	tab = malloc (sizeof (int) * 16);
	k = 0;
	j = 0;
	while (argv[j])
	{
		if (argv[j] >= '1' && argv[j] < '5')
		{
			tab[k] = argv[j] - '0';
			k++;
		}
		j++;
	}
	return (tab); //without spaces
}

int	ft_check_argv(char *argv)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(argv);
	if (len != 31)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (i < len)
	{
		if (j % 2 == 0 && (argv[i] < '0' || argv[i] > '5'))  
		{
			ft_putstr("Error\n");
			return (0);
		}
		if (j % 2 == 1 && argv[i] != ' ')
		{
			ft_putstr("Error\n");
			return (0);
		}
		j = j + 1;
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	valid;
	int	*inputt;
	int	count;
	int	i;
	int	k;

	count = 16;
	if (argc == 2)
	{
		inputt = ft_convert_argv(argv[1]);
		valid = ft_check_argv(argv[1]);
		if (valid == 0)
		{
			return (0);
		}
		ft_backtracking(inputt);
		if(ft_backtracking(inputt) == 0)
			ft_putstr("Error");
		return (0);
	}
	else
		ft_putstr("Error\n");
}
