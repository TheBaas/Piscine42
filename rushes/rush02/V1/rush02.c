#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>

#define BUF_SIZE 5000
#define A "thirty"
#define B "forty"
#define C "fifty"
#define D "sixty"
#define E "seventy"
#define F "eighty"
#define G "ninety"
#define H "hundred"
#define I "thousand"
#define J "million"
#define K "billion"
int	ft_strlen(char *str);

char	g_arr[20];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{	
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			j++;
			if (to_find[j++] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

// int	ft_atoi_one(char l)
// {
// 	int	n;

// 	n = l - ('0');
// 	return (n);
// }

char	*fillarr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		g_arr[i] = str[i];
		i++;
	}
	g_arr[i] = '\0';
	return (g_arr);
}

void	rush02(char *str)
{
	int		fd;
	int		ret;
	int		i;
	char	buf[BUF_SIZE + 1];
	int		length;
	int 	j;
	char	display;

	j = 0;
	length = ft_strlen(str);
	fillarr(str);
	ft_putchar(g_arr[3]);
	fd = open("numbers.dict.txt", O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("open incorrect\n");
	}
	i = 0;
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = read (fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (length == 1)
	{
		ret = 0;
		while (buf[ret] != 0)
		{
			if (buf[ret - 1] != '1' && buf[ret] == *str && \
			buf[ret + 1] == ':' && buf[ret + 2] == ' ')
			{
				i = 3;
				while (!(buf[ret + i] <= '9' && buf[ret + i] >= '0'))
				{
					ft_putchar(buf[ret + i]);
					i++;
				}
			}
			ret++;
		}
	}
	ret = 0;
	while (buf[ret] != 0)
	{
		if (buf[ret - 1] == '1' && buf[ret] == str[1] && \
		buf[ret + 1] == ':' && buf[ret + 2] == ' ')
		{
			i = 3;
			while (!(buf[ret + i] <= '9' && buf[ret + i] >= '0'))
			{
				ft_putchar(buf[ret + i]);
				i++;
			}
		}
		ret++;
	}
	ft_putchar('\n');
	ft_putstr(buf);
	close(fd);
}

// ret + i == str[ i] so we can get entire string\
 compared instead of just one number at a time