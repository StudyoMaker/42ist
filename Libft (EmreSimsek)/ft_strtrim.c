/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:39:10 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/24 14:50:37 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (0);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
/*
int	main ()
{
ilk while da adresste kırpmak istediğim karakterler bitene kadar ilerliyorum
sondan kırpmış halinin indexini buluyorum
başlangıç değerini 0 verip yeni stringin içine s1 in son adresinden başlayıp
len e kadar olan değerleri atayıp döndürüyorum

	char const *s1 = "ahmettalhasahin mert,osman ahmet res";
	char const *set = "alkin";
	char *test = ft_strtrim(s1, set);
	printf("\nset: %s", test);
	//printf("İlk hali: %s\n", s1);
	//printf("Son hali: %s\n", test);
}
*/