#include <stdio.h>
#include "libft.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("A number is expected.\n");
		return (1);
	}
	printf("The number is %d\n", ft_atoi(argv[1]));
	return (0);
}
