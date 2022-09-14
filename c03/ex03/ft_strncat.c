/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:26:58 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/06 11:27:27 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	index_s;

	index = 0;
	index_s = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (index_s < nb && src[index_s] != '\0')
	{
		dest[index + index_s] = src [index_s];
		index_s++;
	}
	dest[index + index_s] = '\0';
	return (dest);
}
