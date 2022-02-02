/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:28:16 by gbezirci          #+#    #+#             */
/*   Updated: 2022/01/17 16:55:55 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static size_t	word_size(char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && (*s == c))
			s++;
	while (*s)
	{
		i++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (i);
}

static size_t	str_l(char **s, char c)
{
	size_t	i;

	i = 0;
	while (**s && (**s == c))
			(*s)++;
	while ((*s)[i] != c && (*s)[i])
			i++;
	return (i);
}

static char	*jc(char *s, char c)
{
	while (*s != c && *s)
		s++;
	return (s);
}

static	char	*init_s(char **s, char c)
{
	size_t	len;
	char	*cc;

	len = 0;
	len = str_l(s, c);
	cc = (char *)malloc(len +1);
	if (!cc)
		return (NULL);
	ft_strlcpy((char *)cc, (char *)*s, len + 1);
	cc[len] = '\0';
	return (cc);
}

char	**ft_split(char const *s, char c)
{	
	char	**ch;
	size_t	i;
	size_t	k;

	k = 0;
	if (!s)
		return (NULL);
	i = word_size((char *)s, c);
	ch = (char **)malloc(i * sizeof(char *) + 1);
	if (!ch)
		return (NULL);
	while (k < i)
	{
		ch[k] = init_s((char **)&s, c);
		if (!ch[k])
			return (NULL);
		s = (char const *) jc((char *)s, c);
		k++;
	}
	ch[i] = NULL;
	return (ch);
}
