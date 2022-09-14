/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 07:46:03 by cbolat            #+#    #+#             */
/*   Updated: 2022/08/30 11:08:03 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	counter;
	int	sizetemp;

	counter = 0;
	if (size % 2 == 0)
		sizetemp = size / 2;
	else
		sizetemp = (size - 1) / 2;
	while (counter < sizetemp)
	{
		temp = tab[counter]++;
		tab[counter] = tab[size - counter - 1];
		tab[size - counter -1] = temp;
		counter++;
	}
}
/*
int	main(void)
{
	int	array[] = {3,4,5,6,7};
	ft_rev_int_tab(array,5);
}
*/
