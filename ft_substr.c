/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:40:05 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/10/08 16:44:16 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	counter;

	counter = 0;
	if (!s)
		return (0);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	if (start >= ft_strlen(s))
		return (substr);
	if (s[counter] == '\0')
		substr[counter] = '\0';
	while (counter < len)
	{
		substr[counter] = s[(start + counter)];
		counter++;
	}
	substr[counter] = '\0';
	return (substr);
}
