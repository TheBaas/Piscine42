unsigned int	ft_strlen(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != 0)
	{
		i++;
		j++;
	}
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}

// int	main(void)
// {
// 	char destin[] = "abcdefghijklmnopqrstuvwxyz";
// 	char sourc[] = "abzzzzz";

// 	printf("%lu", strlcat(destin, sourc, 5));
// 	printf("\n\n%s, %s", destin, sourc);
// }
