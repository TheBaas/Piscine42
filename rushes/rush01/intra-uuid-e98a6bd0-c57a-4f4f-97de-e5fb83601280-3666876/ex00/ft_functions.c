#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != 0)
    {
        write(1, &str[i], 1);
        i ++;
    }
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != 0)
    {
        i ++;
    }
    return (i);
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}


