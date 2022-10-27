/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:52:22 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/21 19:31:38 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mptr;
	int		i;

	if (!s)
		return (0);
	i = 0;
	mptr = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!mptr)
		return (0);
	while (s[i] != '\0')
	{
		mptr[i] = f(i, s[i]);
		i++;
	}
	mptr[i] = '\0';
	return (mptr);
}

/*char t(unsigned int a, char c)
{
	return (ft_toupper(c));
}

int main()
{
	printf("%s",ft_strmapi("moh",t));
}
*/
