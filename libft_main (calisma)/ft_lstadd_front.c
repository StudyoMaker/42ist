/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:52:51 by aergul            #+#    #+#             */
/*   Updated: 2022/01/23 11:19:46 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}
int main()
{
	t_list *s;
	t_list *k;
	
	s = ft_lstnew("merhabalar");
	k = ft_lstnew("arkadaslar");
	ft_lstadd_front(&s,k);
	printf("%s", (s->content));
}