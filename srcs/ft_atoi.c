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
	int	factor;
	int	number;

	number = 0;
	factor = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			factor = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr)) 
	{
		number = number * 10 + (*nptr - 48);
		nptr++;
	}
	return (number * factor);
}
