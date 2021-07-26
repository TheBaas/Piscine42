#include <stdio.h>
#include <unistd.h>

void	rush02(char *str);

int	input_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] <= '9' && str[i] >= '0'))
			return (0);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "ERROR\n", 6);
		return (1);
	}
	input_check(argv[1]);
	rush02 (argv[1]);
	return (0);
}
