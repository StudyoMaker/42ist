/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:33:53 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/13 14:33:55 by esimsek          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		((unsigned char *)dst)[i] = ((unsigned char *)s1)[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
gördüğü verdiğimiz karaktere eşit ise
o karakterden itibaren döndürür..
int	main()
{
	const	char 	*str = "pic kanks";
	char	*p = strdup(str);
	const	char	*str1 = "pic kanks";
	char	*pt = ft_strdup(str1);	
	printf("their :%s\n", p);	
	printf("mine :%s", pt);	
}
*/
