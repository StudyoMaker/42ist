/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:33:44 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/20 11:37:42 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_one;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	new_one = (char *)malloc(len + ft_strlen(s2) + 1);
	if (!new_one || !s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_one[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		new_one[len + i] = s2[i];
		i++;
	}
	new_one[len + i] = '\0';
	return (new_one);
}
/*
#include<stdio.h>
int	main()
{
	char	*test = "13";
	char	*test2 = "Simsek";
	char	*sonuc;
	
	sonuc = ft_strjoin(test, test2);
	printf("%s", sonuc);
	printf("\n%zu", ft_strlen(sonuc));
}
*/