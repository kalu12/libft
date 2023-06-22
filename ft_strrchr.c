/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:37:41 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/22 20:39:40 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*s1;

	s1 = s;
	if (s[0] == '\0' && c == 0)
		return ((char *)s);
	if (!*s)
		return (NULL);
	while (*s)
		s++;
	while (s >= s1)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// int main()
// {
//     const char *p="teste";
//     printf("%s\n",ft_strrchr(p,1024));
// 	printf("%s\n",strrchr(p,1024));
// }