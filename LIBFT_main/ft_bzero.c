/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:50:18 by gbezirci          #+#    #+#             */
/*   Updated: 2022/02/02 15:15:38 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main()
{	
	char dizi[] = "kontrol";
	ft_bzero(dizi, 3);
	printf ("%s", &dizi[3]);
}*/