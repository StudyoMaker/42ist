/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:29:56 by gbezirci          #+#    #+#             */
/*   Updated: 2022/01/17 16:55:26 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

static size_t	f_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	int		flag;

	len = f_len(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	flag = 1;
	if (n < 0)
		flag = -1;
	str[0] = '0';
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	while (0 != n)
	{
		len--;
		str[len] = '0' + flag * (n % 10);
		n /= 10;
	}
	return (str);
}
