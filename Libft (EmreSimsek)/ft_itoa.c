/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:40:08 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/28 12:43:30 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reverse_string(char *str, int len)
{
	int	i;
	int	temp;

	i = 0;
	if (str[0] == '-')
		i++;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
}

static size_t	count_len(long nbr)
{
	size_t	i;

	i = 0;
	if (nbr < 0 || nbr == 0)
	{
		nbr *= -1;
		i = 1;
	}	
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

static void	add_char(char *str, long n, int index)
{
	while (n > 0)
	{
		str[index++] = (n % 10) + ('0');
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;
	size_t	i;

	nbr = n;
	i = 0;
	len = count_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nbr == 0)
		return (ft_strdup("0"));
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
		i += 1;
	}
	add_char(str, nbr, i);
	reverse_string(str, len);
	return (str);
}
/*
#include<stdio.h>

int	main()
{
	char	*str;
	str = ft_itoa(-5123123);
	printf("str: %s", str);
}
*/
