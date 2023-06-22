/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:40:58 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/22 17:14:46 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	char	*s11;
// 	char	*s22;
// 	size_t	i;

// 	s11 = (char *)s1;
// 	s22 = (char *)s2;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (*s11 != *s22)
// 			return ((unsigned char)*s11 - (unsigned char)*s22);
// 	s11++;
// 	s22++;
// 	i++;
// 	}
// 	return (0);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack && len == 0)
		return (NULL);
	if (!needle && len == 0)
		return ((char *)haystack);
	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
// int main ()
// {
//     const char *s = "cd";
//     const char *p ="aaabcabcd";
// 	//printf("%s\n",strnstr("fake", NULL, 3));
//   // printf("%s\n",ft_strnstr("fake", NULL, 3));
// }