/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:55:45 by aergul            #+#    #+#             */
/*   Updated: 2022/01/19 10:02:00 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_tolower(int str)
{
	if (str >= 'A' && str <= 'Z')
		return (str + 32);
	return (str);
}
/*int main()
{
	printf("%c", ft_tolower('F'));
	return (0);
}*/