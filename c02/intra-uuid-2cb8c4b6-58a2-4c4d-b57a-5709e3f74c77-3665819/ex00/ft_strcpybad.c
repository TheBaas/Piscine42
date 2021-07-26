#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest +i) = 0;
	return (dest);
}

int	main()
{
	char	kaas[] = "kaas1";
	char	srcee[] = "cheese";
	char	*dest;

	ft_strcpy(kaas, "hello");
	printf("value of kaas:\n%s", kaas);
	dest = ft_strcpy(kaas , srcee);
	printf("\nnewvalue of kaas:\n%s", kaas);
}

// #include <unistd.h>
// #include <stdio.h>

// char	*ft_strcpy(char	*dest, char	*src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i])
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = 0;
// 	return (dest);
// }

// int	main(void)
// {
// 	char	kaas[] = "kaas1";
// 	char	srcee[] =  "cheese";

// 	printf("value of kaas:\n %s", kaas);
// 	ft_strcpy(kaas, srcee);
// 	printf("\nnewvalue of kaas: \n%s", kaas);
// }
