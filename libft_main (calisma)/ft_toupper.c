/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:55:51 by aergul            #+#    #+#             */
/*   Updated: 2022/01/18 17:29:09 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_toupper(int str)
{
	if (str >= 'a' && str <= 'z')
		return (str - 32);
	return (str);
}
/*int main()
{
	printf("%c", ft_toupper('c'));
	return(0);
}*/