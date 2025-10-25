#include "libft.h"

int	main(void)
{
	char	*s1 = "Example";
	char	*substr;
	unsigned int	start;
	size_t	len;

	/* Core functionalities */
	/*
	start = 0;
	len = 3 ;
	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", s1, start, len, ft_substr(s1, start, len));
	start = -1;
	len = 1 ;
	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", s1, start, len, ft_substr(s1, start, len));
	start = 2;
	len = 4 ;
	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", s1, start, len, ft_substr(s1, start, len));
	start = 6;
	len = 2 ;
	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", s1, start, len, ft_substr(s1, start, len));
	start = 7;
	len = 2 ;
	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", s1, start, len, ft_substr(s1, start, len));
	*/
	/* Edge Cases */
	/*
	start = 0;
	len = -3 ;
	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", s1, start, len, ft_substr(s1, start, len));
	start = 0;
	len = 1 ;
	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", s1, start, len, ft_substr(s1, start, len));
	
	start = 0;
	len = 1 ;
	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", (char *)NULL, start, len, (char *)ft_substr(NULL, start, len));
	
	start = 0;
	len = 1 ;
	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", ft_strdup(""), start, len, ft_substr("", start, len));
	*/
	start = 7;
	len = 2 ;
	printf("String: %s\nstart:%d\nlen:%ld\nsubstr:%s\n", "", start, len, ft_substr("", start, len));
		



	return (0);
}
