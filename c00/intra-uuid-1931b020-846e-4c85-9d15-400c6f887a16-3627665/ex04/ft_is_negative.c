#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	result;

	result = 'N';
	if (n >= 0)
	{
		result = 'P';
	}
	write(1, &result, 1);
}
