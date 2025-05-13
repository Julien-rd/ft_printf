/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:11:41 by jromann           #+#    #+#             */
/*   Updated: 2025/04/28 16:10:46 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (size > 0 && nmemb > 2147483647 / size)
		return (NULL);
	if (size == 0 || nmemb == 0)
	{
		ptr = malloc(1);
		ft_bzero(ptr, 1);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	total_size = size * nmemb;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
