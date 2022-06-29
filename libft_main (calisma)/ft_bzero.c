/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:52:02 by aergul            #+#    #+#             */
/*   Updated: 2022/06/29 15:43:05 by gbezirci         ###   ########.fr       */
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
  char a[] ="merhabalar";
  ft_bzero(a,4);
  printf("%c", a[5]);
}*/