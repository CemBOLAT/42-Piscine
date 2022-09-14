/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:36:56 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/11 01:43:56 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*temp;

	index = 0;
	if (min >= max)
	{
		*range = (void *) 0;
		return (0);
	}
	temp = (int *)malloc(sizeof(int) * (max - min));
	if (temp == (void *) 0)
	{
		*range = 0;
		return (-1);
	}
	*range = temp;
	while (min < max)
	{
		temp[index] = min;
		min++;
		index++;
	}
	return (index);
}
/*
int	main()
{
	int	*p;
	//ft_ultimate_range(&p,4,-12);
	printf("return %d", ft_ultimate_range(&p,4,62));
}
*/
