/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:45:21 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/11 18:00:22 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(src);
	if (dstsize > 0)
	{
		while (j < (dstsize - 1) && src[j])
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}

/*int main()
{

	printf("%lu\n", ft_strlcpy("", "ewew", 0));
	printf("%lu", strlcpy("", "ewew", 0));
	return (0);
}*/
