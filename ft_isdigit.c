/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:29:47 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/16 11:39:18 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//     int c=47;
//     printf("%d\n",isdigit('0'));
// 	printf("%d",ft_isdigit('0'));
// }
