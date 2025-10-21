#include "libft.h"

int	main(void)
{
	char	str[]="Hola!!";

	ft_putstr_fd(str, 0);	
	ft_putstr_fd(str, 1);	
	ft_putstr_fd(str, 2);
	ft_putstr_fd(NULL, 1);
	
	return (0);	
}
