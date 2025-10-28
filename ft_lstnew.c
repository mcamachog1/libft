/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:46:35 by macamach          #+#    #+#             */
/*   Updated: 2025/10/28 08:46:41 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
