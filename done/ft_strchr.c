/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 00:04:12 by adben-mc          #+#    #+#             */
/*   Updated: 2021/09/09 00:25:47 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("True : %s\n", strchr(argv[1], argv[2][0]));
	printf("Fake : %s\n", ft_strchr(argv[1], argv[2][0]));
}*/
