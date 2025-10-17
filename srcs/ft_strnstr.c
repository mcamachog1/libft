/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:22:35 by macamach          #+#    #+#             */
/*   Updated: 2025/10/17 15:33:23 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	j = 0;
	while (j < little_len && big[i] && i < len)
	{
		if (big[i] == little[j])
			j++;
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	if (j == little_len)
		return ((char *)(big + (i - little_len)));
	else
		return (NULL);
}
