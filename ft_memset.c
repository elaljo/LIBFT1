/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 03:00:38 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/11 18:04:38 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (len > i)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*int main()
{
	char a[] = "mohamed";
	printf("%s", (unsigned char *)ft_memset(a, 'h', 3));
}*/
