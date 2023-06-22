/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:24:59 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/23 19:59:38 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate(size_t len, int start, char const *s)
{
	char	*str;

	if ((size_t)start > ft_strlen (s))
		str = malloc(1);
	else if (len + (size_t)start > ft_strlen (s))
		str = malloc((ft_strlen (s) - start) + 1);
	else
		str = malloc(len + 1);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen (s) < len)
		len = ft_strlen(s);
	str = allocate(len, start, s);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

// #include <stdio.h>
// int main ()
// {
// 	printf("%s",ft_substr("1" ,42,42000000));
// }