/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:09:48 by moelalj           #+#    #+#             */
/*   Updated: 2022/10/26 12:32:28 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(int c)
{
	int	count;

	count = 0;
	if (c == 0)
		count = count + 1;
	if (c < 0)
		count = count + 1;
	while (c != 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}

static int	if_stuff(int n, char *str)
{
	unsigned int	nb;

	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nb = n * -1;
	}
	else
		nb = n;
	return (nb);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	char			*str;
	int				i;

	i = counter(n);
	str = malloc (i + 1 * sizeof(char));
	if (!str)
		return (0);
	nb = if_stuff(n, str);
	i--;
	while (nb != 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	i = counter(n);
	str[i] = '\0';
	return (str);
}
