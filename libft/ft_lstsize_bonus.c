/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:03:59 by jromann           #+#    #+#             */
/*   Updated: 2025/04/30 12:26:51 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*buffer;
	int		list_length;

	buffer = lst;
	list_length = 0;
	while (buffer)
	{
		buffer = buffer->next;
		list_length++;
	}
	return (list_length);
}
