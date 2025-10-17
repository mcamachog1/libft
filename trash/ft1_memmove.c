/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft1_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:29:02 by macamach          #+#    #+#             */
/*   Updated: 2025/10/15 13:09:21 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	unsigned char	*bytes_dst;
	unsigned char	*bytes_src;
	unsigned char	temp[n];
	size_t			i;

	bytes_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = bytes_src[i];
		i++;
	}
	bytes_dst = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		bytes_dst[i] = temp[i];
		i++;
	}
	return (dst);
}
