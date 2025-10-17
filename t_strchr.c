#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	c = 'd';
	char	string[20] = "abcdefg";
	char	*pointer;

	printf("%d\n", c);
	pointer = ft_strchr(string, c);
	printf("%d\n", c);
	printf("%s\n", pointer);
	return (0);
}
