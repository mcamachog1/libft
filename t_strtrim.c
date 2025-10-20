#include "libft.h"

int	main(void)
{
	char	*string = "este*es_un string, para eliminar*algunos=Lchars";
	char	*set = "*,";

	printf("str:%s\nset:%s\ntrim:%s\n", string, set, ft_strtrim(string, set));
	return (0);
}
