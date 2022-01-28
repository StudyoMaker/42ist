/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:32:45 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/20 13:24:06 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	aux;	
	size_t	len_needle;
	char	*h;

	len_needle = ft_strlen(needle);
	h = (char *)haystack;
	if (len_needle == 0 || haystack == needle)
		return (h);
	i = 0;
	while (i < len && h[i] != '\0')
	{
		aux = 0;
		while ((h[i + aux] != '\0') && (needle[aux] != '\0')
			&& (h[i + aux] == needle[aux]) && (i + aux) < (len))
			aux++;
		if (aux == len_needle)
			return (h + i);
		i++;
	}
	return (NULL);
}
/*
int	main()

{
	const char *emre = "naber kanka nasilsin.";
	const char *test = " ";

	printf("sonuç: %s\n",ft_strnstr(emre, test, ft_strlen(emre)));
}
*/
