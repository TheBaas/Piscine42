#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (src[c] != 0 && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = 0;
		c++;
	}
	return (dest);
}

int	main(void)
{
	char			src[] = "SOURCE";
	char			destin[] = "ha";
	unsigned int	n;

	n = 6;
	ft_strncpy(destin, src, n);
	printf("%s , %s", src, destin);
}
