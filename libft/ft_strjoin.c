/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:10:54 by jromann           #+#    #+#             */
/*   Updated: 2025/04/28 17:29:04 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*ptr;

	i = -1;
	k = -1;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[++i])
		ptr[i] = s1[i];
	i--;
	while (s2[++k])
		ptr[++i] = s2[k];
	ptr[++i] = 0;
	return (ptr);
}
