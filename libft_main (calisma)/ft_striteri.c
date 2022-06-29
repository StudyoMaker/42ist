/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:54:39 by aergul            #+#    #+#             */
/*   Updated: 2022/01/19 18:12:36 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}
/*void toup(unsigned int x, char *y)
{
	if(y[0] >= 'a' && y[0] <= 'z')
	y[0]-=32;
}
int main()
{
	char a[] = "merhaba";
	ft_striteri(a,toup);
	printf("%s", a);
}*/
