#include <stdio.h>
void	rush(**argv);

int	main(int argc, char **argv)
{

	if (argc != 2)
	{
		return (1);
	}
	
	rush(argv);
	return (0);
}
