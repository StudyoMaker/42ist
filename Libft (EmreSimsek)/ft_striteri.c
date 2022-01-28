/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:11:25 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/24 19:42:04 by esimsek          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
void	f(unsigned int i, char *str)
{
	printf("%d, %s\n", i, str);
}

int	main()
{
	char	*str = "Hello.";
	
	printf("Öncesi: %s\n", str);
	ft_striteri(str, f);
	printf("sonrası: %s", str);
	return (0);
}
*/
