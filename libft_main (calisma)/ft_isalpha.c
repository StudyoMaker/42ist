/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:52:20 by aergul            #+#    #+#             */
/*   Updated: 2022/06/29 13:34:11 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_isalpha(int str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	return (0);
}
/*int main()
{
	printf("%d", ft_isalpha('H'));
}*/