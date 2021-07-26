#include <unistd.h>
void	ft_print_comb2(void);
void	ft_putchar(char c);
char	g_a;
char	g_b;
char	g_c;
char	g_d;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printresult(void)
{
	if (g_a == '0' && g_b == '0' && g_c == '0' && g_d == '0')
	{
		g_d++;
	}
	if (!(g_a == '9' && g_b == '9'))
	{
		ft_putchar(g_a);
		ft_putchar(g_b);
		ft_putchar(' ');
		ft_putchar(g_c);
		ft_putchar(g_d);
		if (!(g_a == '9' && g_b == '8' && g_c == '9' && g_d == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	g_a = ('/');
	g_b = ('/');
	g_c = ('/');
	g_d = ('0');
	while (g_a < '9')
	{
		g_a++;
		g_b = '/';
		while (g_b < '9')
		{
			g_b++;
			g_c = '/';
			while (g_c < '9')
			{
				g_c++;
				g_d = '/';
				while (g_d < '9')
				{
					g_d++;
					ft_printresult();
				}
			}
		}
	}
}
