#include "libft.h"

void	f(unsigned int i, char *c)
{
	char	temp;

	temp = *c;
	*c = temp + 1;
}

int	main(void)
{
	char	string[] = "abcd";
	
	printf("%s\n", string);
	ft_striteri(string, &f);
	printf("%s\n", string);
	return (0);
}
