/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:52:24 by aergul            #+#    #+#             */
/*   Updated: 2022/01/22 23:09:25 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_isascii(int str)
{
	if (str >= 0 && str <= 127)
		return (1);
	return (0);
}
/*int main()
{
	printf("%d", ft_isascii('0'));
}*/