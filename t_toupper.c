#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	lower = 109; //m
	int	upper = 80; //P
	int	other = 42; //*

	printf("Lower letter:\n");
	printf("%c\n", (char)ft_toupper(lower));
	printf("Upper letter:\n");
	printf("%c\n", (char)ft_toupper(upper));
	printf("No letter:\n");
	printf("%c\n", (char)ft_toupper(other));

	return (0);
}
