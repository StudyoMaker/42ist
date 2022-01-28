/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:54:24 by aergul            #+#    #+#             */
/*   Updated: 2022/01/26 15:08:04 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	wordcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			return (i);
		while (*s != c && *s)
			s++;
		i++;
	}
	return (i);
}

static int	charcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && (*s != c))
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		retindex;

	if (!s)
		return (0);
	retindex = 0;
	ret = malloc(sizeof(char *) * wordcounter(s, c) + 1);
	if (!ret)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		ret[retindex] = ft_substr(s, 0, charcounter(s, c));
		retindex++;
		s = s + charcounter(s, c);
	}
	ret[retindex] = NULL;
	return (ret);
}

int main()
{
	char a = ' ';
	char *s="merhabalar merhabalar";
	char **str;
	str = ft_split(s,a);
	printf("%d. kelime %s",2, str[1]);
}