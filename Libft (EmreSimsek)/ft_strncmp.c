/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:51:55 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/20 13:14:25 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && i < n - 1 && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main()
{
	char	emre[] = "Naber kanks, senden naber canksss..";
	char 	source[] = "Naber kanks, senden naber canksss..";
	// iki stringin indexlerinde aynı anda dolaşıp. 
	farklı olan char karakterlerin farkını döndürür..
	printf("kütüphanenin fonks: %d\n", strncmp(emre, source, 17));
	printf("Benim fonks: %d", ft_strncmp(emre, source, 17));
}
*/
