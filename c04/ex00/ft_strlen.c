#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_rev(char *str)
{
	int		i;
	int		j;
	char	temp;
	int		length;

	length = ft_strlen(str);
	length--;
	i = 0;
	while (i < length)
	{
		temp = str[i];
		str[i] = str[length];
		str[length] = temp;
		i++;
		length--;
	}
	return (str);
}

int	main(void)
{
	char	lol[] = "Saak";

	printf("%i", ft_strlen(lol));
	printf("\n%s", ft_rev(lol));
}
