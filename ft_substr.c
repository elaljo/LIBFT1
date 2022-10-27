/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:56:34 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/26 12:58:25 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*mptr;
	size_t	i;
	size_t	j;

	if (!str)
		return (0);
	j = ft_strlen(str);
	if (start > j)
		return (ft_calloc(1, sizeof(char)));
	if (len >= j)
		return (ft_strdup (str + start));
	mptr = malloc(len + 1 * sizeof(char));
	if (!mptr)
		return (0);
	i = 0;
	while (i < len)
	{
		mptr[i] = str[start];
		i++;
		start++;
	}
	mptr[i] = '\0';
	return (mptr);
}
