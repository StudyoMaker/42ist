/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:53:10 by aergul            #+#    #+#             */
/*   Updated: 2022/01/22 20:21:25 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void	fonk(void *s)
{
	printf("%s\n", s);
}

/* int main(int argc, char const *argv[])
{
	t_list *i;
	t_list *b;
	t_list *p;
	
	i = ft_lstnew("hello");
	b = ft_lstnew("low");
	p = ft_lstnew("group");
	ft_lstadd_back(&i, b);
	ft_lstadd_back(&b, p);
	ft_lstiter(i, fonk);
	return 0;
}
*/