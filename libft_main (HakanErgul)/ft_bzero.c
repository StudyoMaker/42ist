/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:52:02 by aergul            #+#    #+#             */
/*   Updated: 2022/01/26 15:54:33 by aergul           ###   ########.fr       */
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
  char a[]= "merhabalar";
  ft_bzero(a,3);
  printf("%c", a[3]);
}*/