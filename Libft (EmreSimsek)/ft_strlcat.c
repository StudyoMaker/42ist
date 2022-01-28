/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:32:51 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/20 12:54:26 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
/*
int	main()
{
	char	dst[20] = "burak";
	const char *src = "emre";

printf("%ld\n",strlcat(dst, src, 10));
}
*/
/*
#include<stdio.h>
dst nin sonuna src nin içindeki değeri
(size - 1) - (len(dst)) kadar ekler ve toplam boyutu döndürür.

int	main()
{
	char	dst[20] = "burak";
	const char *src = "emre";
printf("%ld\n", ft_strlcat(dst, src, 7));
printf("%s\n", dst);
}
*/
