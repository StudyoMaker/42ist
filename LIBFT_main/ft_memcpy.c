/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:52:16 by gbezirci          #+#    #+#             */
/*   Updated: 2022/02/02 15:51:54 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*src2;
	size_t	i;

	i = 0;
	str = (char *)dst;
	src2 = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = src2[i];
		i++;
	}
	return (dst);
}

/*int main(int argc, char const *argv[])
{
	int p[] = {0, 123, 45, 6, 5, 66, 76};
	int *a;
	a = ft_memcpy(p, &p[2], 3);
	printf("%d", a[0]);
	return 0;
}*/

/*int main()
{
	char d[] = {"kontrolediyorum"};
	printf ("%s",ft_memcpy(d, "zozabcXwq", 7));
}*/
