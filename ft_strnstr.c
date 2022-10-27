/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:07:13 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/27 18:05:22 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!src && len == 0)
		return (0);
	if (search[i] == '\0')
		return ((char *)src);
	while (src[i] && j < len)
	{
		while (src[i] == search[i] && j < len)
		{
			i++;
			j++;
			if (search[i] == '\0')
				return ((char *)src);
		}
		src++;
		i = 0;
		j++;
	}
	return (0);
}
