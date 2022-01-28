/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:34:51 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/13 14:34:52 by esimsek          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	dst = malloc(count * size);
	if (!dst)
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
/*
int main()
{
    int *ip;
    size_t  i;

i = 0;
  ip = (int *) calloc(5, sizeof(int));
    while (i != 5)
    {
        printf("Deger: %d\n", ip[i]);
        i++;
    }
    free(ip);
  return 0;
}
*/
