/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:26:09 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/09/21 22:14:49 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		result;
	size_t	counter;
	int		negative;

	counter = 0;
	result = 0;
	negative = 1;
	while (str[counter] == ' ' || str[counter] == '\n' || str[counter] == '\f'
		|| str[counter] == '\t' || str[counter] == '\r' || str[counter] == '\v')
		counter++;
	if (str[counter] == '+' || str[counter] == '-')
	{
		if (str[counter] == '-')
			negative = -1;
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		result = (result * 10) + (str[counter] - 48);
		counter++;
	}
	return (result * negative);
}
