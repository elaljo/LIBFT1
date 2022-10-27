/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 03:10:44 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/11 17:48:39 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n > i)
	{
		str[i] = 0;
		i++;
	}
}

/*int main()
{
	char a[] = "mohamed";
	ft_bzero(a, 2);   // void maktreturni walo
	printf("%s", a);   // eliha kandiro hakaa
}
*/
