/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:00:32 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/24 14:45:50 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		if (s[i] == c)
			return ((char *) s + i);
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (0);
}
/*
int	main ()
{
	char	emre[20];
	char	a;
	char	*sonuc;
	printf("lutfen bir cumle giriniz: ");
	gets(emre);
//	printf("Hangi karakterden itibaren istiyorsun: ");
//	scanf("%c",&a);
	sonuc = ft_strchr(emre, 'a'); // 97 girsen gene a
	printf("%s", sonuc);
}
*/
