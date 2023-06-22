/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:38:41 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/16 21:08:55 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = ft_strlen(src);
	if (!dstsize)
		return (a);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (a);
}

// int main()
// {
//     // char * restrict p="";
//     // char * restrict s = "popo";

//     char p[]= "luka";
//     char s[]= "";
//     printf("%lu\n",strlcpy(p,s,4));
//     printf("%lu",ft_strlcpy(p,s,4));

// }