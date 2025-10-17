#include "libft.h"

int	ft_isspace(char c)
{

	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int	factor;
	int	number;

	i = 0;
	number = 0;
	factor = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			factor = -1;
		i++;
	}
	while (ft_isdigit(nptr[i])) 
	{
		number = number * 10 + (nptr[i] - 48);
		i++;
	}
	return (number * factor);
}
