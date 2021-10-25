/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:28:08 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/10/08 16:51:16 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	counter;
	char	*str;

	counter = 0;
	if (!s || !f)
		return (0);
	str = ft_strdup(s);
	if (!str)
		return (0);
	while (s[counter] != '\0')
	{
		str[counter] = f(counter, str[counter]);
		counter++;
	}
	return (str);
}
