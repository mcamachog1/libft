#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	lower = 109; //m
	int	upper = 80; //P
	int	other = 42; //*

	printf("Lower letter:\n");
	printf("%c\n", (char)ft_tolower(lower));
	printf("Upper letter:\n");
	printf("%c\n", (char)ft_tolower(upper));
	printf("No letter:\n");
	printf("%c\n", (char)ft_tolower(other));

	return (0);
}
