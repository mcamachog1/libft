#include "libft.h"

int	main(void)
{
	char	*string = "ab,c,de,efg";
	char	delimiter = ',';

	printf("string:%s\ndelimiter:%c\n", string, delimiter);
	ft_split(string, delimiter);
	return (0);
}
