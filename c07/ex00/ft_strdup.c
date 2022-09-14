/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:42:39 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/11 01:44:46 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int		index;
	char	*p;

	index = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	p = (char *) malloc (sizeof(char) * index + 1);
	index = 0;
	if (p == (void *) 0)
		return (0);
	while (src[index] != '\0')
	{
		p[index] = src[index];
		index++;
	}
	p[index] = '\0';
	return (p);
}
/*
int	main(void)
{
	printf("%s", ft_strdup("toygun-çil"));
}
*/
