/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:25:41 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/06 11:26:33 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	index_s;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	index_s = 0;
	while (src[index_s] != '\0')
	{
		dest[index] = src [index_s];
		index++;
		index_s++;
	}
	dest[index] = '\0';
	return (dest);
}
