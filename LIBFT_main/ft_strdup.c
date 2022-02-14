/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbezirci <gbezirci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:16:47 by gbezirci          #+#    #+#             */
/*   Updated: 2022/02/14 14:26:33 by gbezirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
int main()
{
	char s1[] = "gokhan";
	char *s2 = "bezirci";
	s1[0] = 'q';
	//s2[0] = 'W';
	char *s;
	char *f;
	s = ft_strdup(s1); // RAM üzerinden işlem gördüğü için üzerine yazabiliyoruz
	f = ft_strdup(s2); // sadece READ olarak tutulduğu için üzerinde değişiklik yapılamıyor
	printf ("%s\n%s", s,f);
}