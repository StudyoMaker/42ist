/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:34:04 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/13 14:34:08 by esimsek          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	const char *ptr = "emre nabeı kanka";
	const char test = 'k';
	printf("\t---Kendi fonksiyonum---\n");
	printf("adres değeri: %p\n", ft_memchr(ptr, test, ft_strlen(ptr)));
	printf("kütphanedeki adres değeri: %p", memchr(ptr, test, strlen(ptr)));
	return (0);
}
*/
