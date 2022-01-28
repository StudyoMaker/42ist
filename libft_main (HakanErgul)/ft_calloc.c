/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:52:07 by aergul            #+#    #+#             */
/*   Updated: 2022/01/26 18:20:12 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (!p)
		return (p);
	ft_bzero(p, (count * size));
	return (p);
}
/*int main()
{
    char *a;
    a=(char*)ft_calloc(1,1);
    printf("%c",*a);
}*/

/*int main()
{
	char *a;
	a=(char*)ft_calloc(1,1);
	printf("%c", *a);
	*a='a';
	printf("%c",*a);
}*/