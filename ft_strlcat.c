/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:22:44 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/10/17 17:42:01 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	c;
	size_t	length;

	dest_len = ft_strlen(dst);
	c = 0;
	length = 0;
	if (dstsize > ft_strlen(dst))
		length = ft_strlen(src) + ft_strlen(dst);
	else
		length = ft_strlen(src) + dstsize;
	while (src[c] != '\0' && dest_len + 1 < dstsize)
	{
		dst[dest_len] = src[c];
		c++;
		dest_len++;
	}
	dst[dest_len] = '\0';
	return (length);
}
