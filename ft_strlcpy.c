/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:57:50 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/10/19 20:49:14 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (dstsize)
	{
		if (len_src >= dstsize)
			len_dst = dstsize - 1;
		else
			len_dst = len_src;
		ft_memcpy(dst, src, len_dst);
		dst[len_dst] = '\0';
	}
	return (len_src);
}
