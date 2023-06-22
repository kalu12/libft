/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:11:57 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/22 20:40:34 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// static int	pow1(int a, int b);
// static int	nomin(int j, const char *str, int k);
// static int	nomin2(int j, const char *str, int k);

// static int	p(const char *s)
// {
// 	int	i;
// 	int	j;
// 	int	m;

// 	i = -1;
// 	j = 0;
// 	m = 0;
// 	while (s[++i] != '\0')
// 	{
// 		while ((s[m] >= 9 && s[m] <= 13) || s[m] == ' ')
// 				m++;
// 		if ((s[j] > 8 && s[j] < 14) || s[j] == ' ' || s[j] == 43 || s[j] == 45)
// 				j++;
// 		else if (s[i] < 48 || s[i] > 57)
// 			return (0);
// 		else if ((s[i] > 47 && s[i] < 58) && (s[i + 1] < 48 || s[i + 1] > 57))
// 		{
// 			if ((j - m) > 1)
// 				return (0);
// 			if (i == 0)
// 				return (1);
// 			return (i);
// 		}
// 	}
// 	return (0);
// }

// int	ft_atoi(const char *str)
// {
// 	int	j;
// 	int	i;
// 	int	atoi;

// 	i = 0;
// 	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
// 		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
// 			i++;
// 	atoi = 0;
// 	j = p(str);
// 	if (j == 0)
// 		return (0);
// 	else if (str[i] == '+')
// 		atoi = nomin2(j, str, i);
// 	else if (str[i] == '-')
// 		atoi = nomin2(j, str, i);
// 	else
// 		atoi = nomin(j, str, i);
// 	return (atoi);
// }

// static int	nomin(int j, const char *str, int k)
// {
// 	int	i;
// 	int	atoi;

// 	i = k;
// 	atoi = 0;
// 	if (j == 1)
// 	{
// 		atoi = (int)str[0] - 48;
// 		return (atoi);
// 	}	
// 	while (i <= j)
// 	{
// 		atoi = pow1(10, (j - i)) * ((int)str[i] - 48) + atoi;
// 		i++;
// 	}
// 	return (atoi);
// }

// static int	nomin2(int j, const char *str, int k)
// {
// 	int	i;
// 	int	atoi;

// 	i = k;
// 	atoi = 0;
// 	i++;
// 	while (i <= j)
// 	{
// 		atoi = pow1(10, (j - i)) * ((int)str[i] - 48) + atoi;
// 		i++;
// 	}
// 	if (str[k] == '-')
// 		atoi = -atoi;
// 	return (atoi);
// }

// static int	pow1(int a, int b)
// {
// 	int	i;
// 	int	res;

// 	res = 1;
// 	i = 0;
// 	while (i < b)
// 	{
// 		res = res * a;
// 		i++;
// 	}
// 	return (res);
// }

// int main()
// {	
//    		printf("%d\n",atoi("1/s"));
// 	    //printf("%d\n",p("12/s"));
//   		 printf("%d\n",ft_atoi("1/s"));
// //     //printf("%d",pow1(10,0));
// }//

int	ft_atoi(const char *str)
{
	int	i;
	int	conversion;
	int	result;

	i = 0;
	conversion = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			conversion *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * conversion);
}

// int main()
// {	
//    		printf("%d\n",atoi("054854\n"));
// 	    //printf("%d\n",p("12/s"));
//   		 printf("%d\n",ft_atoi("054854\n"));
// //     //printf("%d",pow1(10,0));
// }//