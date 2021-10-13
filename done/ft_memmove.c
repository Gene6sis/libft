/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 02:34:42 by adben-mc          #+#    #+#             */
/*   Updated: 2021/09/10 04:07:55 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t		i;

	if (!dst && !src)
		return (dst);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (dest > source)
		while (len)
		{
			len--;
			dest[len] = source[len];
		}
	else 
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	return (dst);
}

/*
#include <stdio.h>

int main()
{
          char a[] = "abcde";
          ft_memmove(a+0, a+2, 3);
          printf("%s\n", a);
          return (0);
}*/
