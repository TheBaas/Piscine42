#include <unistd.h>
/* prints char c to stdout.
write(1:file to write to. one means stdout(i.e. print to
terminal), &c: pointer to data you want to write, 1: amount of 
characters you want to print each write) */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
