/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:42:48 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/10/08 16:35:27 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	counter;

	counter = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	while (s[counter] != '\0' || counter < ft_strlen(s))
	{
		str[counter] = s[counter];
		counter++;
	}
	str[counter] = '\0';
	return ((str));
}
