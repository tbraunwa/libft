/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:19:21 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/09/28 19:34:17 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	c;

	c = 0;
	if (str1 == 0 || str2 == 0)
		return (((unsigned char *)str1)[c] - ((unsigned char *)str2)[c]);
	while (c < n && (str1[c] != '\0' || str2[c] != '\0'))
	{
		if (str1[c] != str2[c])
			return (((unsigned char *)str1)[c] - ((unsigned char *)str2)[c]);
		if (str1[c] == str2[c])
			c++;
	}
	return (0);
}
