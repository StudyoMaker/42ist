/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:54:56 by gbezirci          #+#    #+#             */
/*   Updated: 2022/02/02 12:25:06 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isdigit(int str)
{
	if (str >= '0' && str <= '9')
		return (41);
	return (0);
}
/*int main()
{
	printf("%d",ft_isdigit('8'));
	return(0);
}*/