/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:40:36 by macamach          #+#    #+#             */
/*   Updated: 2025/10/23 11:48:25 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	power(int number, unsigned int exp)
{
	unsigned int	i;
	int		power;

	i = 0;
	power = 1;
	if (!number && !exp)
		return (-1);
	while (i < exp)
	{
		power *= number;
		i++;
	}
	return (power);
}

unsigned int	number_len(int n)
{
	unsigned int	len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

unsigned int	ft_abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	number;
	char		*str;
	int		digit;

	number = ft_abs(n);
	if (number == 0)
		return ("0");
	len = number_len(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 48, len);
	str[len] = '\0';
	i = 0;
	while (str[i])
	{
		digit = number / power(10, len - 1);
		str[i] += digit;
		number = number - (digit * power(10, len - 1));
		len--;
		i++;
	}
	if (n < 0)
		return ("-1");
	return (str);
}
