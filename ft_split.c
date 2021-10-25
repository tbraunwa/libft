/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:45:20 by tbraunwa          #+#    #+#             */
/*   Updated: 2021/10/05 20:58:27 by tbraunwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_string_counter(char *s, char c)
{
	int		counter;

	counter = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			counter++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		end;
	char	**array;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	array = ft_calloc(ft_string_counter((char *)s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	while (s[start])
	{
		while ((s[start] == c) && s[start])
			start++;
		end = start;
		while ((s[end] != c) && s[end])
			end++;
		if (s[start])
			array[i] = ft_substr(s, start, end - start);
		i++;
		start = end;
	}
	return (array);
}
