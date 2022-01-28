/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:32:27 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/20 15:09:22 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sstr;

	sstr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!sstr || !s)
		return (NULL);
	i = 0;
	while (start < ft_strlen(s) && i < len)
	{
		sstr[i] = s[start];
		i++;
		start++;
	}
	sstr[i] = '\0';
	return (sstr);
}
/*
// verdiğin başlangıç değerinden verdiğin size a kadar olan stringi döndürür
#include<stdio.h>
int	main()
{
	char const *s = "e na.ber";
	unsigned int	i = 4;
	size_t	len = 5;
	char	*test;

	test = ft_substr(s, i, len);	
	printf("%s\n%zu", test, ft_strlen(test));
}
*/