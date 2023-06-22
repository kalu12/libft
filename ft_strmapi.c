/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:10:11 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/22 17:46:50 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char f (unsigned int i, char c);
// char	*ft_strdup(const char *s1)
// {
// 	int		i;
// 	char	*str;

// 	i = 0;
// 	while (s1[i] != '\0')
// 		i++;
// 	str = malloc(i + 1);
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	while (s1[i] != '\0')
// 	{
// 	str[i] = s1[i];
// 	i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*t;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	else if (!f)
		return (ft_strdup(s));
	t = ft_strdup(s);
	if (!t)
		return (NULL);
	while (s[i] != '\0')
	{
		t[i] = (*f)(i, s[i]);
		i++;
	}
	return (t);
}

// char f (unsigned int i, char c)
// {
// 	char res;

// 	res = c + 2;
// 	return (res);
// }
// int main ()
// {
// 	char const *p = "luka";
// 	printf("%s",ft_strmapi(p ,f));	
// }
