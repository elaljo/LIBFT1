/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:34:24 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/11 17:58:55 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	if (dst == 0 && src == 0)
		return (0);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	if (d > s)
	{
		while (i < len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}

/*int main()
{
	char src[] = "abcdef";
	char dest[] = "123";
	ft_memmove(dest, src, 4);
	printf("%s", dest);
}*/
