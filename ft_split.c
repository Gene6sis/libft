/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:16:31 by adben-mc          #+#    #+#             */
/*   Updated: 2021/11/25 17:51:09 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(char const *str, char charset)
{
	unsigned int	i;
	unsigned int	compt;

	i = 0;
	compt = 0;
	while (str[i] != charset)
		i++;
	while (str[i] == charset && str[i])
	{
		i++;
		compt++;
	}
	return (compt);
}

int	ft_elements(char const *str, char charset)
{
	unsigned int	i;
	unsigned int	compt;

	i = 0;
	compt = 0;
	while (str[i])
	{
		while (str[i] != charset)
			i++;
		if (str[i] == charset && str[i])
			compt++;
		while (str[i] != charset && str[i])
			i++;
	}
	return (compt);
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	int				i;
	unsigned int	j;
	unsigned int	x;

	result = malloc(sizeof(char *) * (ft_elements(s, c) + 1));
	if (!s || !result)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_elements(s, c))
	{
		x = 0;
		result[i] = malloc(ft_len(&s[j], c) + 1);
		while (s[i] != c)
			j++;
		while (s[i] == c && s[j] != '\0')
			result[i][x++] = s[j++];
		result[i][x] = '\0';
		i++;
	}
	result[i] = 0;
	return (result);
}
