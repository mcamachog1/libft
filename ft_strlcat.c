/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:59:24 by macamach          #+#    #+#             */
/*   Updated: 2025/10/27 13:46:48 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	max;
	size_t	init_len_dst;

	if (size == 0)
		return (ft_strlen(src));
	init_len_dst = ft_strlen(dst);
	if (size < init_len_dst + 1)
		return (size + ft_strlen(src));
	i = 0;
	max = size - (init_len_dst + 1);
	while (i < max && src[i])
	{
		dst[init_len_dst + i] = src[i];
		i++;
	}
	dst[init_len_dst + i] = '\0';
	return (init_len_dst + ft_strlen(src));
}
