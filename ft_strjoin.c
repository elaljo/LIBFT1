/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:53:37 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/12 19:58:18 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	len_s1;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	i = 0;
	str = malloc(len_s1 + ft_strlen(s2) + 1 * sizeof(char));
	if (!str)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[len_s1 + i] = s2[i];
		i++;
	}
	str[len_s1 + i] = '\0';
	return (str);
}
