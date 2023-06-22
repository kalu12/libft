/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:03:39 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/19 23:37:34 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_strings(char const *s, char c)
{
	int	i;
	int	ct;

	i = 0;
	ct = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
		}
		else
		{
			ct++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (ct);
}

static char const	*find_begin(char const *s, char c, unsigned int str_num)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
		}
		else
		{
			if (str_num)
				str_num--;
			else
				return (&s[i]);
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (&s[i]);
}

static char	*trim_string(char const *s, char c, unsigned int str_num)
{
	char const	*begin;
	int			len;

	begin = find_begin(s, c, str_num);
	len = 0;
	while (begin[len] && begin[len] != c)
		len++;
	return (ft_substr(begin, 0, len));
}

static void	exception_handle(char **arr, int to_delete)
{
	int	i;

	i = 0;
	while (i < to_delete)
		free(arr[i++]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	char			*tmp;
	unsigned int	i;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_strings(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < count_strings(s, c))
	{
		tmp = trim_string(s, c, i);
		if (!tmp)
			exception_handle(arr, i);
		arr[i++] = tmp;
	}
	arr[i] = NULL;
	return (arr);
}

// int main () {
// 	// const char *str = "kLukakaaaackkkkkakkkk";
// 	// char ch = 'k';
// 	int i = 0;
// 	char * splitme = "Tripouille";
// 	char **ptr = ft_split(splitme, ' ');
// 	ptr = ft_split(splitme, ' ');
// 	while (ptr[i])
// 	{
// 		printf("%s\n", ptr[i]);
// 		i++;
// 	}
// }