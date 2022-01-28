/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimsek <esimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:38:22 by esimsek           #+#    #+#             */
/*   Updated: 2022/01/24 14:15:09 by esimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	return_lenght(const char *str, char c)
{
	int	i;
	int	control;

	i = 0;
	control = 0;
	while (*str)
	{
		if (*str != c && control == 0)
		{
			control = 1;
			i++;
		}
		else if (*str == c)
			control = 0;
		str++;
	}
	return (i);
}

static char	*add_words(const char *str, int origin, int c)
{
	size_t	i;
	char	*sw;

	sw = malloc((c - origin + 1) * sizeof(char *));
	i = 0;
	while (origin < c)
	{
		sw[i] = str[origin];
		i++;
		origin++;
	}
	sw[i] = '\0';
	return (sw);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**sp;

	sp = malloc((return_lenght(s, c) + 1) * sizeof(char *));
	if (!s || !sp)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && (index >= 0))
		{
			sp[j++] = add_words(s, index, i);
			index = -1;
		}
		i++;
	}
	sp[j] = 0;
	return (sp);
}
/*
#include<stdio.h>
int main ()
{
	char const *s = "emre naber kanka";
	char	c = ' ';
	char	**str;
	//originden c ye kadar olan stringimi tutacam olan char pointeri..	
	str = ft_split(s, c);
	//c - origin + 1 fazladan alan açmamak için yapılan işlem
	printf("%s\n%s\n%s",str[0], str[1], str[2]);
}
*/
