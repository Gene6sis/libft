/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:29:36 by adben-mc          #+#    #+#             */
/*   Updated: 2021/10/13 12:41:15 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

#include <stdlib.h>
#include <stddef.h>

int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
char	*ft_strdup(const char *s1);
int	ft_strcmp(const char *s1, const char *s2);
void	ft_strclr(char *s);
char	*ft_strchr(const char *s, int c);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_isprint(int c);
int	isdigit(int c);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
int	ft_atoi(const char *str);

#endif
