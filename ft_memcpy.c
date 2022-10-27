/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:37:55 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/11 17:57:10 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*dest;

	source = (char *)src;
	dest = (char *)dst;
	if (dest == 0 && source == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

/*int main(void)
{
	//char src[20];
	//char des[20];
	printf("%s",ft_memcpy((void *)0, (void *)0 , 3));
}*/
