/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:13:25 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/17 16:09:08 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
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
//     ft_bzero(arr,2);
//     // Print Array After calling memset
//     printArray(arr,4);
//     printf("%d\n",1);    
//     char arr1[4] = "abcd";
//     // Print Array before calling memset
//     printArray(arr1,4);
//     //Calling own created memset
//     bzero(arr1,2);
//     // Print Array After calling memset
//     printArray(arr1,4);
//     return 0;
// }
