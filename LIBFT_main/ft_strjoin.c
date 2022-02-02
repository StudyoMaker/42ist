/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:26:12 by gbezirci          #+#    #+#             */
/*   Updated: 2022/01/28 17:11:08 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	alan;

	if (!s1 || !s2)
		return (NULL);
	alan = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = malloc(sizeof(char) * alan);
	i = 0;
	j = 0;
	if (!str)
	{
		free(str);
		return (NULL);
	}	
	while (1)
	{
		// i++
		//if (str[i] == 0)
		//	break;
		if (str[++i] == 0)
			break;
		str[i] = s1[i];
	}
	while (1)
	{
		// if (str[i++] == 0)
		// 	break;
		if (str[i] == 0)
			break;
		i++;
        str[i] = s1[i];
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
int main ()
{
	char *w;
	char s1[] = "gokhan";
	char s2[]= "bezirci";
	w = ft_strjoin(s1, s2);
	printf("%s",w);
}
