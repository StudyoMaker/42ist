/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:52:46 by aergul            #+#    #+#             */
/*   Updated: 2022/01/23 13:15:49 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mlst;

	mlst = *lst;
	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		while (mlst->next != NULL)
		{
			mlst = mlst->next;
		}
		mlst->next = new;
	}
}
int main()
{
	t_list *s;
	t_list *k;
	s = ft_lstnew("merhabalar");
	k = ft_lstnew("arkadaslar");
	ft_lstadd_back(&s,k);
	printf("%s", (s->next)->content);
}