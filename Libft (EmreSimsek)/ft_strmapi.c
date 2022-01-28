/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:56:23 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/24 18:59:29 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	unsigned int	i;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char ft_upper(unsigned int i, char str)
{
	if (str >= 96 && str <= 122)
 		return (str - 32);
	return (str);
}

int	main()
{
	char const test[20] = "Em re nab erkankss";
	char	*str;
	unsigned int i = 32;
	
	str = ft_strmapi(test, ft_upper);
	printf("%s", str);
}
*/
