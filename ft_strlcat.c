/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:34:22 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/27 18:34:17 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len_src);
	if (size < len_dest)
		return (size + len_src);
	i = len_dest;
	j = 0;
	while ((i < size - 1) && src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}
/*#include <stdio.h>
int main()
{
	char dest[] = "mohamed";
	char src[10] = " ";

	printf("%zu\n", ft_strlcat(dest, src, 0));
	printf("%zu\n" , strlcat(dest, src, 0));
	return (0);
}*/
