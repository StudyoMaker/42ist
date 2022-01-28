/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:45:02 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/27 14:28:20 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s && *s != c)
			i++;
		while (*s && *s != c)
			s++;
		if (*s && *s == c)
			s++;
	}
	return (i);
}

int	ft_errorcheck(const char *s, size_t *count, char c, char ***str)
{
	if (!s)
		return (0);
	*count = ft_wordcount(s, c);
	*str = malloc ((*count + 1) * sizeof(char *));
	if (!*str)
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	count;

	if (!ft_errorcheck (s, &count, c, &str))
		return (NULL);
	j = 0;
	while (*s)
	{
		i = 0;
		while (s[i] && s[i] != c)
			i++;
		if (i != 0 && j < count)
		{
			str[j] = ft_substr (s, 0, i);
			j++;
		}
		s += i + 1;
	}
	str[count] = NULL;
	return (str);
}

// int main ()
// {
// 	char *str;
// 	char str1;
// 	str = "___xxx_fatih_xxx___";
// 	str1 = '_';
// 	printf("%s", *ft_split(str, str1));
// 	printf("%s", *(ft_split(str, str1) + 1));
// 	printf("%s", *(ft_split(str, str1) + 2));
// }