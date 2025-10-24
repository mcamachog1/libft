#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	c = '\0';
	char	string[5] = "teste";
	char	*pointer;

	//printf("%d\n", c);
	pointer = ft_strchr(string, 'e' + 256);
	printf("%s\n", pointer);
	pointer = ft_strchr(string, 1024);
	//printf("%d\n", c);
	printf("%s\n", pointer);
	return (0);
}
