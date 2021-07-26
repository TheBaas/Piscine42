int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && (s1[i] == s2[i] && (s1[i]) && (s2[i])))
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char destin[] = " ";
// 	char sourc[] = "";

// 	printf("%d", ft_strncmp(destin, sourc, 2));
// 	printf("\n\n%s, %s", destin, sourc);
// }
