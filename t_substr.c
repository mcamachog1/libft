#include "libft.h"

int	main(void)
{
	char	*s1 = "abcdefg";
	char	*substr;
	unsigned int	start;
	size_t	len;

	start = 1;
	len = 6;

	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", s1, start, len, ft_substr(s1, start, len));
	return (0);
}
