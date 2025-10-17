#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s1[20] = "abcd";
	char	s2[15] = "abe";
	char	s3[] = "";

	printf("strncmp = %d (-1)\n", ft_strncmp(s1, s2, 3));
	printf("strncmp = %d (0)\n", ft_strncmp(s1, s2, 0));
	printf("strncmp = %d (+1)\n", ft_strncmp(s1, s3, 1));
	return (0);
}
