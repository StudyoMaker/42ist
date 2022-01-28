/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:10:45 by gbezirci          #+#    #+#             */
/*   Updated: 2022/01/28 12:16:42 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	
	i = ft_strlen(s) - 1;
	while(s[i])
	{
		if(s[i] == c)
		{
			return((char *)s + i);
		}
		i--;
	}
	return (NULL);
}

int main()
{
	char ar[6] = "gakhan";
	printf("%s", ft_strrchr(ar, 'a'));
	return (0);
}