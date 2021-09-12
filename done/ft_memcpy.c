/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 03:43:41 by adben-mc          #+#    #+#             */
/*   Updated: 2021/09/11 04:23:58 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	if (!dst && !src)
		return (dst);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n)
	{
		n--;
		dest[n] = source[n];
	}
	return (dst);
}
