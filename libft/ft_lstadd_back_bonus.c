/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:35:13 by jromann           #+#    #+#             */
/*   Updated: 2025/04/28 21:42:07 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*navigator;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	navigator = *lst;
	while (navigator->next)
		navigator = navigator->next;
	navigator->next = new;
}
