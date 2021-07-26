#define MIDDLE_CHAR ('B')
#define TOP_LEFT_CHAR ('A')
#define TOP_RIGHT_CHAR ('C')
#define BOTTOM_LEFT_CHAR ('A')
#define BOTTOM_RIGHT_CHAR ('C')
#define VERTICAL_CHAR ('B')
#define SPACE_CHAR (' ')
/* First rush on codam notes:
We made code so it will fit all the rushes.
You will be able to change the #defines apropriate to the
rush exercises.
The place of which is stated.
 */
void	ft_putchar(char c);

/* Prints a line. Prints a horizontal line with width x.
The 'begin', 'mid' and 'end' chararacters are the chars 
displayed at the beginning, middle and end of the lines. */
void	line(int x, char begin, char end, char mid)
{
	int	i;

	ft_putchar(begin);
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(mid);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

/* Prints a rectangle. With x width and Y height. 
If x or y is a 0, a black screen is returned. */
void	rush(int x, int y)
{	
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	line(x, TOP_LEFT_CHAR, TOP_RIGHT_CHAR, MIDDLE_CHAR);
	while (i < y - 2)
	{
		line (x, VERTICAL_CHAR, VERTICAL_CHAR, SPACE_CHAR);
		i++;
	}
	if (y > 1)
	{
		line(x, BOTTOM_LEFT_CHAR, BOTTOM_RIGHT_CHAR, MIDDLE_CHAR);
	}
}
