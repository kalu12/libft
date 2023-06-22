/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:06:49 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/15 17:12:58 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//     int string = 100;
//     printf("%d\n",isalpha(string));
// 	 printf("%d",ft_isalpha(string));
// }
