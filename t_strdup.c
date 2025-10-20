#include "libft.h"

int	main(void)
{
	char	*dup;
	char	*src = "Hola!!"; 

	dup = ft_strdup(src);
	if (dup == NULL)
		return (1);
	while (*dup)
	{
		printf("%c\n", *dup);
		dup++;
	}
	return (0);
	
}
