/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:34:21 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/13 14:34:23 by esimsek          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
iki stringin aynı anda indexlerinde gezinir
eğer iki stringinde indexlerindeki değerler farklıysa farkı döndürür.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*st1;
	const unsigned char	*st2;
	size_t				i;

	i = 0;
	st1 = (const unsigned char *)s1;
	st2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	const	char *s1 = "intabaaçaka";
	const	char *s2 = "inaabtagçaka";
	int	a;

	a = ft_memcmp(s1, s2, 5);	
	printf("\nçıktı :%d\nkutphane çıktı: %d", a, memcmp(s1, s2, 5));
	return (0);
}
*/
