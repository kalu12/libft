/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:12:09 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/19 23:46:35 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*src1;
	char	*dest1;
	size_t	i;

	i = 0;
	src1 = (char *)src;
	dest1 = (char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// char csrc[] = "GeeksforGeeks";
// char cdest[100];
// memcpy(cdest, csrc, strlen(csrc)+1);
// printf("Copied string is %s", cdest);
// int isrc[] = {1,2,3};
// int n = sizeof(isrc)/sizeof(isrc[0]);
// int idest[n], i;
// memcpy(idest, isrc, sizeof(isrc));
// printf("\nCopied array is ");
// for (i=0; i<n; i++)
//     printf("%d ", idest[i]);
// return 0;
// }