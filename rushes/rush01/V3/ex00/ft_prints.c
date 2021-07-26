#include <unistd.h>
#include <stdlib.h>

void	ft_print_line(int r);

void	ft_putint(int i)
{
	char	c;

	c = (char)i + '0'; // wont work >9
	write(1, &c, 1);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i ++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_print_board(int r1, int r2, int r3, int r4)
{
	ft_print_line(r1);
	ft_print_line(r2);
	ft_print_line(r3);
	ft_print_line(r4);
	return (0);
}
