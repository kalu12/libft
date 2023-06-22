/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:13:05 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/15 17:14:42 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c = c - 32;
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <xlocale.h>
// int main(void)
// {
//     printf("%d\n",ft_toupper(74));
//     printf("%d",toupper(74));
// }