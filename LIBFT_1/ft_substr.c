/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:24:38 by gbezirci          #+#    #+#             */
/*   Updated: 2022/01/28 15:12:02 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	strsayac;

	i = -1;
	strsayac = -1;
	if (start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		str = malloc(sizeof(char) * ft_strlen(s));
	else
		str = malloc(sizeof(char) * len + 1);
	if (!str)
	{
		free(str);
		return (0);
	}
	while (s[start] && ++i <= len)
	{
		str[++strsayac] = (char)s[start];
		start++;
	}
	str[len] = '\0';
	return (str);
}

// "merhabalar" 3 4 > haba

int main()
{
	char test[] = "merhabalar";
	unsigned int start = 3;
	size_t len = 4;
	char *g;
	
	g = ft_substr(test, start, len);
	// g = ft_substr ("denemeyap", 3, 4);
	printf ("%s",g);
	
}