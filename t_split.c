#include "libft.h"

int	main(void)
{
	char	*string = ",ab,c,de,efg,";
	char	delimiter = ',';
	char	**split;
	int	i;


	printf("CALL FUNCTION string:%s\ndelimiter:%c\n\n", string, delimiter);
	split = ft_split(string, delimiter);
	i = 0;
	while (split[i])
	{
		printf("%d - %s\n", i, split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (0);


}
