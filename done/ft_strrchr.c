/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 00:26:21 by adben-mc          #+#    #+#             */
/*   Updated: 2021/09/09 00:31:43 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("True : %s\n", strrchr(argv[1], argv[2][0]));
	printf("Fake : %s\n", ft_strrchr(argv[1], argv[2][0]));
}*/
