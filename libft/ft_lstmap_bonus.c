/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:11:36 by jromann           #+#    #+#             */
/*   Updated: 2025/05/05 10:28:08 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(t_list *new_list, t_list *buffer, void (*del)(void *))
{
	new_list = buffer;
	while (new_list)
	{
		buffer = new_list->next;
		del(new_list->content);
		free(new_list);
		new_list = buffer;
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*buffer;
	t_list	*navigator;

	navigator = lst;
	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = f(navigator->content);
	buffer = new_list;
	navigator = navigator->next;
	while (navigator)
	{
		new_list->next = (t_list *)malloc(sizeof(t_list));
		if (!new_list->next)
		{
			ft_free(new_list, buffer, del);
			return (NULL);
		}
		new_list->next->content = f(navigator->content);
		new_list = new_list->next;
		navigator = navigator->next;
	}
	new_list->next = NULL;
	return (buffer);
}
