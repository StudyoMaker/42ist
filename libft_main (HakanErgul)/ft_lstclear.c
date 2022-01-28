/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:52:57 by aergul            #+#    #+#             */
/*   Updated: 2022/01/23 11:28:02 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*array;

	while ((*lst))
	{
		array = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = array;
	}
}

void	del(void *cont)
{
	cont = 0;
}
int main()
{
	t_list *s;
	s = ft_lstnew("hello");
	ft_lstclear(&s, del);
	printf("%s", (char *)s);
	return(0);	
}
