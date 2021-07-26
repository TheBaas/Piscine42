#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1 , &c, 1);
}

char    ft_rev_char_array(char *str)
{
    while(*str != 0)
    {
        ft_putchar(*str);
		str++;
    }
	return(0);
}

int main(void)
{

    ft_rev_char_array("cheesesandwich");
}
