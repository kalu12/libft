/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:31:55 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/15 17:13:01 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//     int c=180;
//  printf("%d\n",isascii(c));
// 	printf("%d",ft_isascii(c));
// }