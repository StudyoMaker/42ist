/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:01:29 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/20 13:03:04 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (len);
}
/*
int	main()
verdiğimiz size - 1 kadar src nin içindeki değeri dst ye ekler
ve len(src) yi döndürür.
{
	char	test1[10] = "";
	const char test2[] = "emre";
	size_t ret = ft_strlcpy(test1, test2, 5);
	printf("%ld", ret);
}
*/
