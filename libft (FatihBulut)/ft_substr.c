/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:30:14 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/08 20:33:05 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
