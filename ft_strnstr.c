/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 21:32:35 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/09/29 13:42:39 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *pattern, size_t len)
{
	size_t	counter;
	size_t	sec;

	counter = 0;
	if (pattern[counter] == 0)
		return ((char *)&str[counter]);
	while (counter < len && str[counter] != '\0')
	{
		sec = 0;
		while (str[counter + sec] == pattern[sec] && (counter + sec) < len)
		{
			if (pattern[sec + 1] == '\0')
				return ((char *)&str[counter]);
			sec++;
		}
		counter++;
	}
	return (0);
}
