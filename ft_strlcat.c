/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:55:33 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/22 17:23:07 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

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

// size_t	ft_strlcpy1(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	a;

// 	i = 0;
// 	a = ft_strlen(src);
// 	if (!dstsize)
// 		return (a);
// 	while (src[i] && i < dstsize - 1)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (a);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ret;

	i = 0;
	if (dst == NULL)
	{
		ret = ft_strlcpy(dst, src, dstsize - i);
		return (ft_strlen (src));
	}
	while (*dst && i < dstsize)
	{
		++dst;
		++i;
	}
	ret = ft_strlcpy(dst, src, dstsize - i);
	return (ret + i);
}

// int main()
// {
// 	char p[40] = "B";
// 	char p1[40] = "B";
// 	char *g = "AAAAAAAAA";
// 	printf("%lu\n",strlcat(NULL,g,0));
// 	//printf("%s\n",p);
// 	printf("%lu\n",ft_strlcat(NULL,g,0));
// 	//printf("%s\n",p1);
// }