#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
		i++;
	while (i > 0)
	{
		if (argv[i] != 0)
			ft_putstr(argv[i]);
		i--;
	}
}
