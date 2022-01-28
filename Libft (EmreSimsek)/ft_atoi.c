/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:34:33 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/24 18:59:01 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	int			result;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (*str - '0') + (result * 10);
		str++;
	}
	return (result * sign);
}
/*
#include<stdlib.h>
int	main()
{
	printf("%d\n", ft_atoi("+36"));
	printf("%d\n", ft_atoi("--51"));
	printf("%d\n", ft_atoi("a331"));
	printf("%d\n", ft_atoi("   -98"));
	printf("%d\n", ft_atoi("#"));
	printf("%d\n", ft_atoi(" .42"));
	printf("%d\n", ft_atoi("    -+123"));
	printf("\t---KÜTÜPHANENİN FONKSİYON---\n\n");
	printf("%d\n", atoi("+36"));
	printf("%d\n", atoi("--51"));
	printf("%d\n", atoi("a331"));
	printf("%d\n", atoi("   -98"));
	printf("%d\n", atoi("#"));
	printf("%d\n", atoi(" .42"));
	printf("%d\n", atoi("    -+123"));
}
*/
