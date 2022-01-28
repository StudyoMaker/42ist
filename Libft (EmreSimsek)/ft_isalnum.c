/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:55:57 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/03 18:37:57 by esimsek          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if ((argument >= 48 && argument <= 57) || \
		(argument >= 65 && argument <= 90) || \
		(argument >= 97 && argument <= 122))
	{
		return (1);
	}
	return (0);
}
