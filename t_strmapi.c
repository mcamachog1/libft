#include "libft.h"

char	f(unsigned int i, char c)
{
	return (c + 1);
}

int	main(void)
{
	char	*string = "abcd";
	char	*results;
	
	results = ft_strmapi(string, &f);
	printf("%s\n", results);
	free(results);
	return (0);
}
