/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:37:51 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/10/14 20:41:14 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		counter;

	counter = 0;
	if (n <= 0)
	{
		counter++;
		n = n * -1;
	}
	while (n != 0 && counter < 11)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	counter;
	long	i;

	i = n;
	counter = ft_count(n);
	str = (char *)malloc(sizeof(char) * (counter + 1));
	if (!str)
		return (0);
	if (i == 0)
		str[0] = '0';
	str[(counter)] = '\0';
	while (i != 0 && counter > 0)
	{
		if (i < 0)
		{
			i = i * -1;
			str[0] = '-';
		}
		str[counter - 1] = (i % 10) + '0';
		i = i / 10;
		counter--;
	}
	return (str);
}
