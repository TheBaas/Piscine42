#include "header.h"

char	**ft_grid(const char	*str, int	width, int	height)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * (height + 1));
	while (i < height)
	{
		arr[i] = (char *)malloc(sizeof(char) * (width + 1));
		i++;
	}
	while (str[j] != '\n')
	{
		j++;
	}
	j++;
	i = 0;
	while (i < height)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return(arr);
}

int	ft_check_x_axis(const char	*str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	i++;
	while (str[i] != '\n')
	{
		i++;
		count++;
	}
	return (count);
}

int	ft_check_y_axis(const char	*str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (str[i] == '\n')
		{
			i++;
		}
		str++;
	}
	return (i);
}

void	ft_putstr(const	char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_load_map(const char *argv)
{
	int		size;
	int		file;
	char	ch;
	char	*map;

	size = 1;
	file = open(argv, O_RDONLY);
	while (read(file, &ch, 1) != 0)
		size++;
	map = (char *)malloc(sizeof(char) * (size + 1));
	close(file);
	file = open(argv, O_RDONLY);
	read(file, map, size);
	close(file);
	return (map);
}

int	main(int argc, char **argv)
{
	char	*map;
	int		width;
	int		height;
	char	**grid;

	if (argc == 2)
	{
		map = ft_load_map(argv[1]);
		width = ft_check_x_axis(map);
		height = ft_check_y_axis(map);
		grid = ft_grid(map, width, height);
		//printgrid(grid);
		free(map);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
