/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:24:38 by gbezirci          #+#    #+#             */
/*   Updated: 2022/02/28 18:31:01 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;
	size_t		x;

	i = start;
	x = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str || !s)
		return (NULL);
	while (i <= ft_strlen(s) && len > x)
	{
		str[x] = s[i];
		x++;
		i++;
	}
	str[x] = '\0';
	return (str);
}