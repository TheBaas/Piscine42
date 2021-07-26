char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char destin[] = "kaaaaaaaas";
// 	char sourc[] = "cheese";

// 	printf("%s", ft_strncat(destin, sourc, 4));
// 	printf("\n\n%s, %s", destin, sourc);
// }
