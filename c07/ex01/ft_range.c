/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:59:37 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/10 20:52:57 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;
	int	temp;

	i = 0;
	if (min >= max)
	{
		p = 0;
		return (p);
	}
	temp = min;
	p = (int *) malloc (sizeof(int) * (max - min));
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
/*
int	main()
{
	//ft_range(4,8);
	printf("return %p", ft_range(9,8));
}
*/
