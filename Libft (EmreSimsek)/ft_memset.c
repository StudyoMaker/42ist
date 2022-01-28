/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:43:22 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/08 14:03:56 by esimsek          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*dst;

	dst = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		dst[i] = ((unsigned char)c);
		i++;
	}
	return (b);
}
/*
int	main()
{
	int	emre[20] = {1,2,3,4};    
	int	erme[20] = {1,2,3,4};
	ft_memset(emre, 3, 2);
	memset(erme, 3, 1);	
	printf("%d, %d\n", emre[0], emre[1]);
	
	printf("%d, %d", erme[0], erme[1]);
}
*/
