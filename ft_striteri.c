/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:14:01 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/21 19:49:22 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/*void	upper(unsigned int a, char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
		*ch -= 32;
}
int main()
{
	char s[10] = "hello";
	ft_striteri(s, upper);
	printf("%s", s);
}*/
