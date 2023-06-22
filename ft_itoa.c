/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:53:25 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/22 13:34:15 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	pow1(int a, size_t b);
static char	*ft_putnbr_fd1(int n, char *p, size_t bytes, size_t minus);
char		*p(size_t minus, size_t bytes);

char	*ft_itoa(int n)
{
	size_t	bytes;
	int		res;
	size_t	minus;
	char	*s1;

	minus = 0;
	res = 100;
	bytes = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		minus = 1;
	}
	while (res >= 10)
		res = n / pow1(10, bytes++);
	if (bytes == 1 && (n % 10 == 0) && (n / 10 == 0))
		n = -n;
	s1 = p(minus, bytes);
	if (!s1)
		return (NULL);
	return (ft_putnbr_fd1(n, s1, bytes, minus));
}

char	*p(size_t minus, size_t bytes)
{
	char	*p;

	if (minus == 0)
	{
		p = (char *)malloc(sizeof(char) * bytes + 1);
		if (!p)
		{
			return (NULL);
		}
		else
			return (p);
	}
	else
	{
		p = (char *)malloc(sizeof(char) * bytes + 2);
		if (!p)
			return (NULL);
		else
			return (p);
	}
}

static int	pow1(int a, size_t b)
{
	size_t	i;
	int		res;

	res = 1;
	i = 0;
	while (i < b)
	{
		res = res * a;
		i++;
	}
	return (res);
}

static char	*ft_putnbr_fd1(int n, char *p, size_t bytes, size_t minus)
{
	if (minus != 0)
	{
		p[0] = '-';
		bytes++;
		p[bytes] = '\0';
	}
	if (minus == 0)
		p[bytes] = '\0';
	if (n == 0)
		p[0] = 0 + 48;
	else
	{
		while (n)
		{
			p[bytes - 1] = (n % 10) + '0';
			bytes--;
			n = n / 10;
		}
	}
	return (p);
}

// int main()
// {
//     char *s;
// 	s = ft_itoa(2147483647);
// 	// printf("%s",s);
// 	// free(s);
// 	return 0;
// }