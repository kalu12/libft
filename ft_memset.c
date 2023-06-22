/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:49:16 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/17 16:11:48 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	p = s;
	while (i < len)
	{
		*p = (char)c;
		i++;
		p++;
	}
	return (s);
}

// #include <stdio.h>
// void printArray(char arr[], int n)
// {
//     int i =0;
//     for (i=0; i<n; i++)
//     {
//         printf("%c\n", arr[i]);
//     }
// }
// int main()
// {
//     char arr[4] = "abcd";
//     // Print Array before calling memset
//     printArray(arr,4);
//     //Calling own created memset
//     ft_memset(arr,'0', sizeof(arr));
//     // Print Array After calling memset
//     printArray(arr,4);
//     printf("%d\n",1);
//     char arr1[4] = "abcd";
//     // Print Array before calling memset
//     printArray(arr1,4);
//     //Calling own created memset
//     memset(arr1,'0', sizeof(arr1));
//     // Print Array After calling memset
//     printArray(arr1,4);
//     return 0;
// }