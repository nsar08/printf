/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:08:21 by nsar              #+#    #+#             */
/*   Updated: 2021/10/27 18:24:18 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	ft_end(const char *s, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (s == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s));
	start = ft_start(s, set);
	end = ft_end(s, set);
	if (start >= end)
		return (ft_strdup(""));
	res = (char *)malloc(sizeof(char) * (end - start + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s + start, end - start + 1);
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	char s1[] = " \t \t \t \n    \n\n\n\t";
	printf("before strtrim: %s\n", s1);
	ft_strtrim(s1);
	printf("after strtrim: %s\n", s1);
	return (0);
}*/
