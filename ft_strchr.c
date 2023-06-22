/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:35:57 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/22 18:52:07 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	if (s[0] == '\0' && c == '\0')
		return ((char *)s);
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

// int main()
// {
//     const char *p="";
//     printf("%s\n",strchr("teste", 515));
// 	printf("%s",ft_strchr("teste", 515));
// }
// char	*ft_strchr(const char *s, int c)
// {
// 	if (!*s)
// 		return (0);
// 	while (*s)
// 	{
// 		if (*s == (char)c)
// 			return ((char *)s);
// 	s++;
// 	}
// 	return (0);
// }
//above is my previous code,it doesnt work nor \0 bcs in the 
//while we first ask while(*s) and inside of while we as (if*s==(char)c)
//,so that means for \0 code will first break and then it 
//will check for \0 which makes no sense.
// if (s[0] == '\0' && c == 0)
// 	return ((char *)s);