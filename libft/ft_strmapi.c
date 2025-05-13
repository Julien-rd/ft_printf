/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:36:21 by jromann           #+#    #+#             */
/*   Updated: 2025/04/30 12:06:53 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	i = -1;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (ptr == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		ptr[i] = f(i, s[i]);
	ptr[i] = 0;
	return (ptr);
}
