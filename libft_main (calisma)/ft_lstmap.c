/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:53:22 by aergul            #+#    #+#             */
/*   Updated: 2022/01/22 22:55:57 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	result = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}

/*
void	*f(void *s)
{

	return(s);
}

void	del(void *s)
{
	s = 0;
}

void iter(void *s)
{
	printf("%s\n", (char *)s);
}


int main(int argc, char const *argv[])
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = ft_lstnew("hi");
	b = ft_lstnew("hello");
	ft_lstadd_back(&a, b);
	c = ft_lstmap(a, f, del);
	ft_lstiter(c, iter);
	return 0;
}*/
