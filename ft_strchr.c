/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:53:58 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/10/13 19:53:15 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (((char *)s)[counter] == (char )c)
			return ((char *)(s + counter));
		counter++;
	}
	if (s[counter] == '\0' && c == '\0')
		return (((char *)(s + counter)));
	return (0);
}
