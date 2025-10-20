#include "libft.h"

int	main(void)
{
	int	*array;
	char	*string;
	int	i;
	size_t	nelements;

	nelements = 5;
	array = ft_calloc(nelements, sizeof(int));
	i = 0;
	while (i < nelements)
		printf("%d\n", array[i++]);
	string = ft_calloc(nelements + 1, sizeof(char));
	string[nelements + 1] = '0';
	i = 0;
	printf("String\n");
	while (i < nelements)
		printf("%d - %c\n", i, string[i++]);
	return (0);

}
