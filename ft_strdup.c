/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:26:27 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/21 23:10:19 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	while (s1[i] != '\0')
		i++;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
	str[i] = s1[i];
	i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char *p ="luka";
// 	printf("%s\n",ft_strdup(p));
// 	printf("%s",strdup(p));
// }
