#include "libft.h"

int	main(void)
{
	int	array1[] = {1,2,3,0,6};
	int	array2[] = {1,2,3,4,9};
	char	string1[] = "abcde";
	char	string2[] = "abcww";
	
	printf("With 16 bytes are differents: %d\n", ft_memcmp(array1, array2, 16));
	printf("With 12 bytes are equal: %d\n", ft_memcmp(array1, array2, 12));
	printf("With 24 bytes are diferents: %d\n\n", ft_memcmp(array1, array2, 24));
	printf("With 4 bytes are differents: %d\n", ft_memcmp(string1, string2, 4));
	printf("With 3 bytes are equal: %d\n", ft_memcmp(string1, string2, 3));
	printf("With 10 bytes are diferents: %d\n", ft_memcmp(string1, string2, 10));

	return (0); 
	
}
