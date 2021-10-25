/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:38:08 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/10/14 10:32:11 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	counter;
	char	*subsrc;
	char	*subdest;

	counter = 0;
	subsrc = (char *)src;
	subdest = (char *)dest;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (n > 0)
		{
			subdest[n - 1] = subsrc[n - 1];
			n--;
		}
	}
	while (counter < n)
	{
		subdest[counter] = subsrc[counter];
		counter++;
	}
	return (dest);
}
