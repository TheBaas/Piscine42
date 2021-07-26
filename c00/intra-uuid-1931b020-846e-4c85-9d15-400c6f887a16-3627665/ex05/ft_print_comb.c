#include <unistd.h>

void	ft_placenumbers(void);
void	ft_putchar(char c);

char	g_fi;
char	g_se;
char	g_th;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{	
	g_fi = '/';
	g_se = '0';
	g_th = '0';
	while (g_fi < '7')
	{
		g_fi++;
		g_se = g_fi;
		while (g_se < '8')
		{
			g_se++;
			g_th = g_se;
			while (g_th < '9')
			{	
				ft_placenumbers();
			}
		}
	}
}

void	ft_placenumbers(void)
{	
	g_th++;
	ft_putchar(g_fi);
	ft_putchar(g_se);
	ft_putchar(g_th);
	if (!(g_fi == '7' && g_se == '8' && g_th == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
