/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:55:56 by nsar              #+#    #+#             */
/*   Updated: 2021/10/19 18:12:45 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c <= 122)
		c -= 32;
	return (c);
}
/*#include <stdio.h>
int main(void)
{
	int c = 'w';
	printf("%d\n", ft_toupper(c));
}*/