/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:18:06 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/22 16:40:01 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		if (*s1 == (char)c)
			return ((void *)s1);
		s1++;
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
//     const void *p = "luka";
//     printf("%s\n",memchr(s,2,3));
//     printf("%s",ft_memchr(s,2,3));
// }