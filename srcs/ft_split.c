#include "libft.h"

int	ft_countdelimiters(char c, const char *str)
{
	size_t	total;
	
	total = 0;
	while (*str)
	{
		if (*str == c)
			total++;
		str++;
	}
	return (total);			
}

int	ft_strsize(char	*str, char c)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] == c)
			return (len);
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**pointers;
	size_t	numstrs;

	numstrs = ft_countdelimiters(c , s) + 1;
	pointers = malloc( numstrs * sizeof(char *));	
	ft_memset(pointers, 0, numstrs);
	size_t	i;
	i = 0;
	while (i < numstrs)
	{
		pointers[i] = malloc(
		printf("%li - %s\n", i, pointers[i]);
		i++;

	}
	return (pointers);
}
