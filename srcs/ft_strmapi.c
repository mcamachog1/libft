/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:08:39 by macamach          #+#    #+#             */
/*   Updated: 2025/10/24 14:05:24 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*results;

	size = (unsigned int)ft_strlen(s);
	results = malloc((size + 1) * sizeof(char));
	if (results == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		results[i] = f(i, s[i]);
		i++;
	}
	results[i] = '\0';
	return (results);
}
