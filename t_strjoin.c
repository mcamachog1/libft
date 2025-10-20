#include "libft.h"

int	main(void)
{
	char	*s1 = "Primer_String__";
	char	*s2 = "Segundo_string!!!";

	printf("Primer string:%s\nSegundo string:%s\nJOIN:%s\n", s1, s2, ft_strjoin(s1, s2));
	return (0);
}
