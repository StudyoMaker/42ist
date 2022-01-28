/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:52:35 by aergul            #+#    #+#             */
/*   Updated: 2022/01/22 23:11:35 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(int str)
{
	if (str >= 32 && str <= 126)
		return (1);
	return (0);
}
/*int main()
{
	printf("%d", ft_isprint('c'));
}*/