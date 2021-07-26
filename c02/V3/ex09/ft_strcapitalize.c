char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		if (j == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 97 - 65;
			j++;
		}	
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a'))
			j = 0;
		else if (j > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 97 - 65;
		else
			j++;
		i++;
	}
	return (str);
}
