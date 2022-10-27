/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:51:27 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/26 13:25:51 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t nb)
{
	size_t	i;
	char	*str;
	char	pc;

	pc = c;
	i = 0;
	str = (char *)s;
	while (nb > i)
	{
		if (str[i] == pc)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	char a[] = "mohamehd";
	printf("%s", (char *)ft_memchr(a, 'h', 4));
}
*/
