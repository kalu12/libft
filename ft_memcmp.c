/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:14:20 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/16 16:31:19 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s11;
	char	*s22;
	size_t	i;

	s11 = (char *)s1;
	s22 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (*s11 != *s22)
			return ((unsigned char)*s11 - (unsigned char)*s22);
	s11++;
	s22++;
	i++;
	}
	return (0);
}

// int main()
// {
//     const void *p = "luka1";
//     const void *p1 = "lukass";
//     printf("%d\n",memcmp(p,p1,10));
//     printf("%d",ft_memcmp(p,p1,10));
// }