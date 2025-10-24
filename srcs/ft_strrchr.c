/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:50:32 by macamach          #+#    #+#             */
/*   Updated: 2025/10/24 13:45:30 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;

	n = ft_strlen(s);
	if ((unsigned char)c == 0)
	{
		while (s[n])
			n--;
		return ((char *)(&s[n]));
	}
	while (n > 0)
	{
		if (s[n - 1] == (unsigned char)c)
			return ((char *)&s[n - 1]);
		else
			n--;
	}
	return (NULL);
}
