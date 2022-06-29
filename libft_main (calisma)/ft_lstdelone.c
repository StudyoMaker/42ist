/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergul <aergul@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:53:05 by aergul            #+#    #+#             */
/*   Updated: 2022/01/22 20:25:26 by aergul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void	del(void *cont)
{
	cont = 0;
}*/
/*int main()
{
	t_list *s;
	s = ft_lstnew("hello");
	ft_lstdelone(s, del);
	return(0);	
}*/