/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:52:35 by aergul            #+#    #+#             */
/*   Updated: 2022/06/29 14:10:21 by gbezirci         ###   ########.fr       */
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
	printf("%d", ft_isprint('f'));
}*/