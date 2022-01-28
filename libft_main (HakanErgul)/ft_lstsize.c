/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:53:34 by aergul            #+#    #+#             */
/*   Updated: 2022/01/23 12:37:38 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	a = ft_lstnew("merhaba");
	b = ft_lstnew("abc");
	c = ft_lstnew("ucuncu");
	ft_lstadd_back(&a,b);
	ft_lstadd_back(&b,c);
	ft_lstsize(a);
	printf("%d", ft_lstsize(a));
}*/