/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:44:28 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/10/08 16:37:47 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	counter;

	counter = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (counter < n)
	{
		((char *)dest)[counter] = ((char *)src)[counter];
		counter++;
	}
	return (dest);
}
