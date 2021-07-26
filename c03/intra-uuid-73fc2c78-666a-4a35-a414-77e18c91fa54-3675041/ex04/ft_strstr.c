char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	m;

	m = 0;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		m = 0;
		while (to_find[m] == str[i + m])
		{
			if (to_find[m + 1] == '\0')
			{
				return (str + i);
			}
			m++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char destin[] = "3456789";
// 	char sourc[] = "6";

// 	printf("%s", ft_strstr(destin, sourc));
// 	printf("\n\n%s, %s", destin, sourc);
// }
