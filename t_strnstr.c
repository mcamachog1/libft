
#include "libft.h"

int	main(void)
{
	char	big[20] = "aaaabc51Aab";
	char little[3] = "ab";
	char	*ptr;

	ptr = ft_strnstr(big, little, 20);
	if (ptr == NULL)
	{
		printf("Patern not found.\n");
		return (1);
	}	
	printf("%s\n", ptr);
	return (0);
	
}

